#include<iostream>
using namespace std;

// int binary_search(int arr[], int n, int x)
// {
//     int low=0, high=n-1, mid=(low+high)/2;
//     if(arr[mid]==x)
//         return mid;
//     else
//     { 
//         if(arr[mid]<x)
//         {
//             low=mid+1;
//         }
//         else if(arr[mid]>x)
//         {
//             high=mid-1;
//         }
//         for(int i=low;i<=high;i++)
//         {
//             if(arr[i]==x)
//                 return i;
//         }

//     }
//     return -1;

// }


int binary_search(int arr[], int n, int x)
{
    int low=0, high=n-1; 
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;
    }
    return -1;
}



int main()
{
    int arr[]={10,20,30,40,50,60};
    int x=40;
    int idx = binary_search(arr, 5,x);
    cout<<"The index of the element to be searched "<<x<<" is : "<<idx<<endl;
}