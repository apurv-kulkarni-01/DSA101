#include<bits/stdc++.h>
using namespace std;

// not stable
// in place
void selection_sort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int min_idx = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}


int main()
{
    int arr[] = {10,8,20,5,1};
    selection_sort(arr, 5);
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}