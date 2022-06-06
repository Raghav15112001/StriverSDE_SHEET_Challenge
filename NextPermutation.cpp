#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int keyindex1=-1,keyindex2;
    for(int i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            keyindex1 = i;
            break;
        }
    }
   
       if(keyindex1<0){
           sort(permutation.begin(),permutation.end());
           return permutation;
       }
    
       for(int i=n-1;i>=0;i--){
        if(permutation[keyindex1]<permutation[i]){
            keyindex2 = i;
            break;
        }
    }
    
        int temp = permutation[keyindex1];
        permutation[keyindex1]=permutation[keyindex2];
        permutation[keyindex2]=temp;
        sort(permutation.begin()+keyindex1+1,permutation.end());
        
    return permutation;
}
