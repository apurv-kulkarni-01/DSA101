#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    int temp;
    bool swapped = false;
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-1-i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {10,8,20,5,1};
    bubble_sort(arr, 5);
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}

