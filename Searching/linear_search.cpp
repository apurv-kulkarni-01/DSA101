#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1;

}


int main()
{
    int arr[]={5,1,9,3,2};
    int x = 9;
    int idx = linear_search(arr, 5,x);
    cout<<"The index of the element to be searched "<<x<<" is : "<<idx<<endl;
}