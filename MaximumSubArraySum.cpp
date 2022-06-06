#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int maxsum=0,cursum=0;
    for(int i=0;i<n;i++){
        
        cursum+=arr[i];
        if(maxsum<cursum){
            maxsum=cursum;
        }
        if(cursum<0){
            cursum=0;
        }
    }
    
    return maxsum;
}
