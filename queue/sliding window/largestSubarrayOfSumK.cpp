   #include<bits/stdc++.h>
    using namespace std;

      int main(){
      vector<int> a = {4,1,1,1,2,3,5} ;
       int n = 7 ;
       int target = 5;
        int sum = 0,max_sum=0;
        int i=0,j=0;
        while (j<n)
        {
            /* code */
            sum+=a[j];
            
            if( sum < target){
                j++;
                continue;
            }

            else if( sum == target){
                max_sum = max(max_sum ,j-i+1);
            }
            else{
                while(sum > target){
                    sum-=a[i];
                    i++;
                }
                if(sum == target)
                max_sum = max(max_sum ,j-i+1);
            }
            j++;
        }
        cout<<max_sum;
      }