#include<bits/stdc++.h>
using namespace std;

void boundry_traversal(int *arr[], int m, int n){
    if(n==1){
        for(int k =0;k<m;k++){
            cout<<arr[k][0]<<" ";
        }
    }
    else if(m==1){
        for(int k =0;k<n;k++){
            cout<<arr[0][k]<<" ";
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<arr[0][i]<<" ";
        }
        for(int i=1;i<m;i++){
            cout<<arr[i][n-1]<<" ";
        }
        for(int i=n-2;i>=0;i--){
            cout<<arr[m-1][i]<<" ";
        }
        for(int i=m-2;i>=1;i--){
            cout<<arr[i][0]<<" ";
        }
    }
}

int main(){
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
    boundry_traversal(arr, m, n);
}