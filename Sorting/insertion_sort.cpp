#include<bits/stdc++.h>
using namespace std;

// failed

// void insertion_sort(int arr[], int n)
// {
//     int sorted_elements = 1;
//     int temp;
//     for(int i=1; i<n;i++)
//     {
//         if(arr[sorted_elements-1]>arr[i]){
//             temp=arr[i];
//             for(int j=i;j<0;j--){
//                 if(arr[j]<arr[i]){
//                     arr[]
//                 }
//                 arr[j] = arr[j-1];
                
//             }
//         }   
//     }
// }

// -------------------------------------------------------------------


// stable
// in place
// most popular for small sized arrays
// BC: O(n)     array already sorted 
// WC: O(n^2)

void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


int main()
{
    int arr[] = {20,5,40,60,10,30};
    insertion_sort(arr, 6);
    cout<<"Final = "<<endl;
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}