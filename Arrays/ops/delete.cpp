#include<iostream>
using namespace std;


// O(n)
int deleteEle(int arr[], int size, int x)
{
    if(size==0)
        return 0;
    else{
        int i;
        for(i=0;i<size;i++)
        {
            if(arr[i]==x)
                break;
        }
        if(i==size)
            return size;
        for(int j=i;j<size-1;j++)
        {
            arr[j]==arr[j+1];
        }
        return size-1;
    }
}


int main()
{
    int arr[5]={9,6,7,28,14};
    int size_arr = sizeof(arr)/sizeof(arr[0]);  //capacity
    int x, pos;
    cout<<"Delete: "<<endl;
    cin>>x;
    cout<<endl<<"Deleting "<<x<<"."<<endl;
    size_arr = deleteEle(arr, size_arr,x);
    cout<<endl<<"Modified size of arr "<<size_arr<<".";


}