#include<bits/stdc++.h>
using namespace std;

bool pow_of_two(int x){
    if(x==0){return false;}
    if((x & (x-1)) == 0){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    cout<<pow_of_two(n);
}