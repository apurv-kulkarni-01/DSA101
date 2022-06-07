#include<iostream>
using namespace std;

//Search: UNSORTED : return index of its first occurance
// O(n)
int search(int arr[], int size, int x)
{
    if(size==0)
        return -1;
    else{
        for(int i=0;i<size;i++)
        {
            if(arr[i]==x)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[5]={9,6,7,25,31};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<size_arr<<endl;
    cout<<"Number to be searched: "<<endl;
    cin>>x;
    cout<<endl<<"Searching for "<<x<<"."<<endl;
    int index = search(arr, size_arr, x);
    cout<<endl<<"Index of "<<x<<" is "<<index;
}