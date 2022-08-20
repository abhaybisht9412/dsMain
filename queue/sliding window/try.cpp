#include<bits/stdc++.h>
using namespace std;

int main(){
queue<int> q;
q.push(5);
q.push(10);

q.push(100);
q.pop();
while (!q.empty())
{
    /* code */
    cout<<q.front()<<" ";
    q.pop();
}

}