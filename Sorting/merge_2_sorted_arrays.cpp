#include<bits/stdc++.h>
using namespace std;

// T.C. = THETA(m+n)

int merge_arrays(int a[], int b[], int m, int n){
    int i=0, j=0;
    while(i<m && j<n){
        if(a[i]<=b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}

int main(){
    int a[] = {10,20,35};
    int b[] = {5,50,50};
    merge_arrays(a, b, 3, 3);
}