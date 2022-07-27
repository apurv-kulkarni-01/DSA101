#include<iostream>
using namespace std;

// naive
// T.C. = o(n)
// A.S. = O(n)
int remove_duplicate_naive(int arr[], int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res = 1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        cout<<temp[i]<<" ";
    }
    return res;
}

// BEST
// T.C. = o(n)
// A.S. = O(1)
int remove_duplicate(int arr[], int n)
{
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}


int main()
{   
    int arr[] ={5,5,3,3,1};
    int n=5;
    n = remove_duplicate(arr, n);
    cout<<endl<<"The size of non duplicate array: "<<n<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}