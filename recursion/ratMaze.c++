#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 3;
    int m = 4;
  
    vector<vector<int>> vec( n , vector<int> (n, 0)); 
  
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout<< endl;
    }
      
    return 0;
}