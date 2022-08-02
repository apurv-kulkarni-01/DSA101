#include<bits/stdc++.h>
using namespace std;

// int merge_fnx(int arr[], int low, int mid, int high){
    // int i=m;
    // int j=m+1;
    // while(j<=h){
    //     int key = arr[j];
    //     while(i>=l){
    //         if(arr[i]<arr[j]){
    //             arr[i+1] = arr[j];
    //             j++;
    //             break;
    //         } else{
    //             arr[i+1] = arr[i];
    //             i--;
    //         }
    //     }
    // }
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }

// }

void merge_(int arr[], int low, int mid, int high){
    int n1 = mid-low+1, n2 = high-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i] = arr[low+i];       //we take low here because we can have a subarray asked in the question
    }
    for(int i=0;i<n2;i++){
        right[i] = arr[mid+1+i];
    }

    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k] = left[i];
            k++;
            i++;
        }
        else{
            arr[k] = right[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k] = left[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = right[j];
        k++;
        j++;
    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={10,15,20,11,30};
    int low=0, mid=2, high=4;
    merge_(arr, low, mid, high);
    
}