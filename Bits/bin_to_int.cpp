#include<bits/stdc++.h>
using namespace std;

void toInt(int n){
    int base = 1;
    int decimal = 0;
    int temp = n;
    while(temp>0){
        int last_digit = temp%10;
        temp = temp/10;
        decimal+=last_digit*base;
        base = base*2;
    }
    cout<<decimal;
}


int main(){
    int bin = 110111;
    toInt(bin);
}