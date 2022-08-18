#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x) return mid;
        // checking for sorted array
        if(arr[low]<arr[mid]){
            if(x>=low && x<mid){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(x>mid && x<=high){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

    }
    return -1;
}

int main(){
    int arr[] = {100,200,300,400,20,30,40};

    cout<<search(arr, 7, 35);
}