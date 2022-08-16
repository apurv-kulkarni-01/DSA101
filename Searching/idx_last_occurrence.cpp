#include<bits/stdc++.h>
using namespace std;

int lastOccurance(int arr[], int n, int x){
    int high = n-1;
    int low = 0;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]>x){
            high=mid-1;
        }
        if(arr[mid]<x){
            low=mid+1;
        }
        else{
            if(arr[mid]!=arr[mid+1] || mid==0){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
    }
}

int main(){
    int arr[] = {3,3,3,79,79};
    int x=3;
    int lx = lastOccurance(arr, 5, x);
    cout<<lx;
}