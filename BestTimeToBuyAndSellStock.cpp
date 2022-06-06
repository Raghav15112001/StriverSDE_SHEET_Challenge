#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int min = prices[0] , maxProfit=0;
    for(int i=0;i< prices.size();i++){
        if(min>prices[i]){
            min = prices[i];
        }
        if(maxProfit< prices[i]-min){
            maxProfit = prices[i]-min;
        }
    }
    return maxProfit;
}
