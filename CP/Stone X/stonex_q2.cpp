#include<bits/stdc++.h>
using namespace std;

int brian_kerningam(int n){
    int set_bits = 0;
    while(n>0){
        n = (n&(n-1));
        set_bits++;
    }
    return set_bits;
}

int main(){
    int n = 5;
    int res = brian_kerningam(n);
    cout<<res;
}