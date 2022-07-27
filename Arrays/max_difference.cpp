#include<bits/stdc++.h>
using namespace std;

// naive
// TC O(n^2)
int maxDiffNaive(int arr[], int n){
    int res = arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            res = max(res, arr[j]-arr[i]);
        }
    }
    return res;
}

// BEST 
// TC THETA(n)
int maxDiff(int arr[], int n){
    int res = arr[1]-arr[0];
    int minVal =arr[0];
    for(int i=1;i<n;i++){
        res = max(res, arr[i]-minVal);
        minVal = min(minVal, arr[i]);
    }
    return res;
}

int main(){
    int arr[]={2,3,10,6,4,8,1};
    int r = maxDiff(arr, 7);
    cout<<r;
}