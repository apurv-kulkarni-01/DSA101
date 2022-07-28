#include<bits/stdc++.h>
using namespace std;

// d<= no. of elements in the array 
// TC THETA(n*d) 

// executing the left rotate by 1 function d times
void left_rotate(int arr[], int n){
    int toRotate = arr[0];
    for(int k=0;k<n-1;k++){
        arr[k]=arr[k+1];
    }
    arr[n-1] = toRotate;
}

// TC THETA(n) 
// AS THETA(d)



// TC THETA(n) 
// AS THETA(1) 
void reverse_arr(int arr[], int low, int high){
    while(high>low){
        swap(arr[low], arr[high]);
        high--;
        low++;
    }
}

void leftRotate(int arr[], int n, int d){
    reverse_arr(arr, 0, d-1);
    reverse_arr(arr, d, n-1);
    reverse_arr(arr, 0, n-1);
}




int main(){
    int arr[5]={1,2,3,4,5};
    int d=2;
    // left_rotate(arr, 5);
    leftRotate(arr, 5, 2);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

