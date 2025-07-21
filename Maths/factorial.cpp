#include<bits/stdc++.h>
using namespace std;

//recursive
int calculate_factorial(int n){
    if(n==1){
        return 1;
    }
    return n*calculate_factorial(n-1);

}

//iterative
int calculate_factorial_itr(int n){
    int product = 1;
    while(n>1){
        product *= n;
        n-=1;
    } 
    return product;
}

int main(){
    int num = 6;
    int result = calculate_factorial_itr(num);
    cout<<result;
}