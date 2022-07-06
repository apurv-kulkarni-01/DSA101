#include<bits/stdc++.h>
using namespace std;

void zeros_end_naive(int arr[], int size){
    int a[size]={0};
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            a[j] = arr[i];
            j++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

void zeros_end_naive_2(int arr[], int size){
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            for(int j=i+1;j<size;j++){
                if(arr[j]!=0){
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void zeros_end_best(int arr[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            swap(arr[count], arr[i]);
            count++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr1[]= {8,5,0,10,0,0,20};
    int arr2[] = {10,20};
    int arr3[] = {0,0,10,0};
    zeros_end_best(arr1,7);
    
}