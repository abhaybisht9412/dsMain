#include<bits/stdc++.h>
using namespace std;

bool checker(string s,int n){

       stack<char> st;
        for(auto i :s){
            if( i=='(' || i=='{' || i=='[' )
            st.push(i);
            else {
                if(!st.empty()){
                if(i == '}')
                {
                    if(st.top()!='{')
                    return false;
                    else st.pop();
                }
                
                 else if(i==')'){
                     if(st.top() != '(') return false;
                     else st.pop();
                 }
                 else if(i==']'){
                     if(st.top() != '[') return false;
                     else st.pop();
                 }
                }
                else return false;
            
            }
        }
        if(!st.empty()) return false;
        return true;
}

int main(){
    string s ;
    cin>>s;
    int n = s.size();
    cout<<checker(s,n);
}