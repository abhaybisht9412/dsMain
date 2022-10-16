#include<bits/stdc++.h>
using namespace std;

void insertArray(vector<int> &a ,int ele){
    if(a.size() == 0 || a[a.size()-1] <= ele)
    {
        a.push_back(ele);
        return;
    }
    int temp = a[a.size()-1];
    a.pop_back();
    insertArray(a,ele);
    a.push_back(temp);
}

void sortArray(vector<int> &a){
    if (a.size() == 1)
    {
        /* code */
        return ;
    }
    int ele = a[a.size()-1];
    a.pop_back();
    sortArray(a);
    insertArray(a,ele);
}

int main () {
    vector<int> a = {3,1,2,5};
    
    sortArray(a);
    for (auto &i : a)
    {
        /* code */
        cout << i << " " ;
    }
    return 0;
}