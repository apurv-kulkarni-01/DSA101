#include<bits/stdc++.h>
using namespace std;

// inplace 
// TC THETA(n) 
void left_rotate(int arr[], int n){
    int toRotate = arr[0];
    for(int k=0;k<n-1;k++){
        arr[k]=arr[k+1];
    }
    arr[n-1] = toRotate;
}

int main(){
    int arr[5]={1,2,3,4,5};
    
    left_rotate(arr, 5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

