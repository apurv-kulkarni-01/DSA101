#include<bits/stdc++.h>
using namespace std;

// T.C. = THETA(n)
// A.S. = O(n)

int count_distinct(int arr[], int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}

int count_distinct_eff(int arr[], int n){
    unordered_set<int> s(arr, arr+n);
    return s.size();
}

int main(){
    int arr[5] = {10,20,20,20,30};
    int ans = count_distinct_eff(arr,5);
    cout<<ans;
}