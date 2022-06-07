#include<iostream>
using namespace std;


// O(n) 
int insert(int arr[], int size, int n, int x, int pos)
{
    if(size==n)
        return n;
    else if(pos>size)
    {
        cout<<endl<<"Position out of range!"<<endl;
        return n;
    }
    else{
        int idx = pos-1;
        for(int i=n-1;i>=idx;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[idx] = x;
        return n+1;
    }
}


int main()
{
    int arr[5]={9,6,7};
    int size_arr = sizeof(arr)/sizeof(arr[0]);  //capacity
    int filled_places = 3;                      //n 
    int x, pos;
    cout<<size_arr<<endl;
    cout<<endl<<"Elements in the array earlier= "<<filled_places<<endl;
    cout<<"Insert: "<<endl;
    cin>>x;
    cout<<endl<<"At position: "<<endl;
    cin>>pos;
    cout<<endl<<"Inserting "<<x<<" at position "<<pos<<"."<<endl;
    filled_places=insert(arr, size_arr, filled_places, x, pos);
    cout<<endl<<"Elements in the array later= "<<filled_places;
    
}