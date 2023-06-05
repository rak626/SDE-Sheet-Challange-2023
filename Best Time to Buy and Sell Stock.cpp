#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int prev = prices[0], best = 0;

    for(int i = 0 ; i < prices.size() ; i++){
        if(prices[i] < prev){
            prev = prices[i];
        } else {
            best = max(best, prices[i] - prev);
        }
    }
    return best;
}