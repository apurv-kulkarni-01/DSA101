#include<bits/stdc++.h>
using namespace std;

int count_1s(int arr[], int n){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==0){
            low=mid+1;
        }
        else{
            if(mid==0 || arr[mid-1]==0){
                return(n-mid);
            }
            else{
                low=mid+1;
            }
        }
    }
    return(0);
}

int main()
{
    int arr[] = {0,0,0,1,1};
    int s = sizeof(arr)/sizeof(arr[0]);
    int ans = count_1s(arr, s);
    cout<<ans;
}