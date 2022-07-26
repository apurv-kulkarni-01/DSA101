#include<iostream>
using namespace std;

int main()
{
    // declaring and initializing array 
    int arr[] ={1,5,3,6,8};

    // printing array using for loop 
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\nPrinting array using while loop"<<endl;

    // printing array using while loop 
    int i=0;
    while(i<5)
    {
        cout<<arr[i]<<" ";
        i++;
    }

    // pointers and arrays 

    // pointer arithmetic
    int* p = arr;
    cout<<endl<<endl<<"Printing array using pointer: "<<*p<<endl;
    cout<<endl<<"Printing array using pointer: "<<*(p+1)<<endl;
    cout<<endl<<"Printing array using pointer: "<<*(p+2)<<endl;

    // declaring array without any value
    cout<<endl<<endl<<"This is a new array."<<endl;
    int new_arr[5] = {7,9};
    
    i=0;
    while(i<5)
    {
        cout<<new_arr[i]<<" ";
        i++;
    }


    cout<<endl<<endl<<"This is a new new new new array."<<endl;
    cout<<"Indexes which are not initialised store garbage values in them"<<endl;
    int newnew_arr[5];
    newnew_arr[2]=5;
    
    i=0;
    while(i<5)
    {
        cout<<newnew_arr[i]<<" ";
        i++;
    }

}