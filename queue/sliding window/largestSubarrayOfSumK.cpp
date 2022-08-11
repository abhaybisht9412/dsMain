    #include<bits/stdc++.h>
    using namespace std;

      int main(){
      vector<int> a = {4,1,1,1,2,3,5} ;
       int n = 7 ;
       int target = 5;
       int i=0,j=0;
       vector<int> ans;
       for(int i=0;i<n;i++){
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            /* code */
            sum+=a[j];
            if(sum > target){
                break;
            }
            else if(sum == target){
                ans.push_back(j-i+1);
                break;
            }
            else continue;
        }
       }
       cout<<*max_element(ans.begin(),ans.end());
         
        }