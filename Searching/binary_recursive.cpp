#include<iostream>
using namespace std;

int binary_recursive(int arr[], int low, int high, int x)
{
    if(low>high)
        return -1;
    
    int mid=(low+high)/2;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x)
    {
        binary_recursive(arr,low, mid-1, x);
    }
    else if(arr[mid]<x)
    {
        binary_recursive(arr, mid+1, high, x);
    }

}


int main()
{
    int arr[] = {3,9,41,66,79};
    int x=90;
    int idx = binary_recursive(arr, 0, 4, x);
    cout<<"The index of the element to be searched "<<x<<" is : "<<idx;
}