#include<iostream>
using namespace std;

int second_largest_element(int arr[], int n)
{
    int id_large=0;
    int id_snd_large = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[id_large])
        {
            id_snd_large=id_large;
            id_large=i;
        }
        else if(arr[i]<arr[id_large])
        {
            if(id_snd_large== -1)
            {
                id_snd_large=i;
            }
            else if(arr[i]>arr[id_snd_large])
            {
                id_snd_large=i;
            }
        }
    }
    return id_snd_large;
}

int main()
{
    int arr[]={3,3,3,3,3};//{15,8,16,10,4};
    int id = second_largest_element(arr, 5);
    cout<<"Index of the second largest element is : "<<id;
}