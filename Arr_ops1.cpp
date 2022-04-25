// unsorted array : search : linear search : O(n)
// sorted array : search : binary search : O(log n)


// insert
// T.C. : O(n)
// Insert at end : O(1)
// Insert at beginning : Th(n)

#include<iostream>
using namespace std;

void print_arr(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int insert_arr()
{
    int arr_insrt[7] = {9,5,7,6,3};
    int n = 7;
    int size = 5;
    int insrt = 0;
    int pos = 1;

    cout<<"Array before inserting"<<endl;
    print_arr(arr_insrt, size);
    for(int z=size; z>pos-1;z--)
    {
        arr_insrt[z] = arr_insrt[z-1];
    }
    arr_insrt[pos-1] = insrt;
    size++;
    cout<<endl<<"Array after inserting"<<endl;
    print_arr(arr_insrt, size);
}

int main()
{
    insert_arr();

}
