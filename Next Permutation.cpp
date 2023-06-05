#include <bits/stdc++.h> 

void reverse(vector<int>& permutation,int s, int e){
    while(s < e){
        swap(permutation[s], permutation[e]);
    }
}


vector<int> nextPermutation(vector<int> &permutation, int n){

    int idx = -1;
    for(int i = n-2 ; i >= 0 ; i--){
        if(permutation[i] < permutation[i+1]){
            idx = i;
            break;
        }
    }
    if(idx >= 0 ){
        for(int i = n-1 ; i > idx ; i--){
            if(permutation[i] > permutation[idx]){
                swap(permutation[i], permutation[idx]);
                break;
            }
        }
    }
    reverse(permutation, idx+1, n-1);
}