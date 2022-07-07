#include<bits/stdc++.h>
using namespace std;

void var_sized_array(int m, int n){
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=i+j;
        }
    }
    cout<<"\nPrinting the multi-dimantional array: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main()
{
    int m, n;
    cout<<"Enter dimensions of the multi-dimentional array: ";
    cin>>m>>n;
    var_sized_array(m,n);
}