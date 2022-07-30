#include<bits/stdc++.h>
using namespace std;

// bits having value 1 are called set bits 

// T.C = theta(total bits in n) 
void count_set_bits_naive(int n){
    int res=0;

    // using bitwise operators
    while(n>0){
        if((n&1)!=0){
            res++;
        }
        n=n>>1;
    }

    // without using bitwise operators 
    // while(n>0){
    //     if(n%2!=0){
    //         res++;
    //     }
    //     n=n/2;
    // }
    cout<<res;
}

// when we subtract any number by 1, all the bits which are 0 after the last set bit (left most bit set) they become 1 and 
// last set bit becomes 0 from 1.

// T.C = theta(total set bits in n) 
void brian_kerningam(int n){
    int res=0;
    while(n>0){
        n=(n&(n-1));
        res++;
    }
    return res;
}

int main(){
    count_set_bits_naive(5);
}