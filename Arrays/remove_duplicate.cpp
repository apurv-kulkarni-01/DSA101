#include<iostream>
using namespace std;

int remove_duplicate(int arr[], int n)
{
    int res = 1;
    for(int i=0;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
            arr[res] = arr[i];
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
    cout<<"The size of non duplicate array: "<<n<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}