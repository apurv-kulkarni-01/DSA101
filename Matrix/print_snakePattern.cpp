#include<bits/stdc++.h>
using namespace std;

void snakePattern(int *arr[], int m, int n){
    int row=0;
    for(int i=0;i<m;i++){
        if(row%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            row++;
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            row++;
        }
    }
    
}

int main()
{
    int m,n;
    cout<<"m,n : ";
    cin>>m>>n; 
    int *arr[m];
    for(int i=0;i<m;i++){
        arr[i] = new int [n];
        for(int j=0;j<n;j++){
            cout<<i<<"*"<<j<<"th element: ";
            cin>>arr[i][j];
        }
    }
    snakePattern(arr, m, n);
}