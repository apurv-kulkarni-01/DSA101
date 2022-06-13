#include<iostream>
using namespace std;

void reverse_array(int arr[], int n)
{
    int low=0, high=n-1;
    int temp;
    while(high>low)
    {
        temp=arr[high];
        arr[high]=arr[low];
        arr[low]=temp;
        high--;
        low++;
    }
}


int main()
{   
    int arr[] ={5,1,9,3,2};
    int n=5;
    reverse_array(arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}