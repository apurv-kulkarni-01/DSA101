#include<iostream>
using namespace std;

int largest_element(int arr[], int n)
{
    int id_large = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[id_large])
        {
            id_large = i;
        }
    }
    return id_large;
}


int main()
{
    int arr[] = {5,8,16,10,4}; //{3,3,3,3,3};
    int id = largest_element(arr, 5);
    cout<<"Index of the largest element is : "<<id;

}