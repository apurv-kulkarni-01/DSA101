#include<bits/stdc++.h>
using namespace std;

// method - 1
void kthbit(int n, int k){
    if(n&(1<<(k-1))!=0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

// method - 2
void kthbit_new(int n, int k){
    if(n>>(k-1)&1==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    kthbit(5,3);
    kthbit_new(13,3);
}
