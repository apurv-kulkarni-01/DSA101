#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
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
    int arr[] = {24,18,38,43,14,40,1,54};
    bubble_sort(arr, 8);
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}

