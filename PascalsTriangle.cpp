#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{

      vector<vector<long long int>> finalans(n);
      for(int i=0;i<n;i++){
          finalans[i].resize(i+1);
          finalans[i][0]=finalans[i][i]=1;
          
          for(int j=1;j<i;j++){
              finalans[i][j]=finalans[i-1][j-1]+finalans[i-1][j];
          }
      }
    return finalans;
      
  
}
