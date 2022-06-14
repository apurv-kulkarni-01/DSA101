#include<iostream>
using namespace std;

int idx_first_occurence(int arr[], int , int );

int idx_first_occurence_recursive(int arr[], int low, int high, int x)
{
    if(low>high)
        return -1;

    int mid=(low+high)/2;
    
    if(arr[mid]>x)
    {
        return idx_first_occurence_recursive(arr,low, mid-1, x);
    }
    else if(arr[mid]<x)
    {
        return idx_first_occurence_recursive(arr, mid+1, high, x);
    }

    else{
        if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;
        else
            return idx_first_occurence_recursive(arr,low, mid-1, x);

    }
    
}


int idx_first_occurence(int arr[], int n, int x)
{
    int low=0, high=n-1; 
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;
        else{
            if(mid==0 || arr[mid-1]!=arr[mid])
                return mid;
            else
                high=mid-1;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {3,9,41,66,79};
    int x=90;
    int idx_r = idx_first_occurence_recursive(arr, 0, 4, x);
    int idx = idx_first_occurence(arr, 5, x);
    cout<<"The index of the element to be searched "<<x<<" is : "<<idx_r<<endl;
    cout<<"The index of the element to be searched "<<x<<" is : "<<idx;
}