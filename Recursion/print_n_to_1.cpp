#include<iostream>
using namespace std;

void recur(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    recur(n-1);
}

// non tail recursive

void recur2(int n){
    if(n==0){
        return;
    }
    recur2(n-1);
    cout<<n<<" ";
}

// tail recursive

// void recur2(int i, int n){
//     if(i==n+1){
//         return;
//     }
//     cout<<i<<" ";
//     recur2(i+1,n);
// }

int main()
{
    int n = 7;
    recur2(n);
}