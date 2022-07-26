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

// swap used 
void reverse_array_new(int arr[], int n){
    int low=0;
    int high=n-1;
    while(high>low){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}


int main()
{   
    int arr[] ={5,1,9,6,3,2};
    int n=6;
    reverse_array_new(arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}