#include<bits/stdc++.h>
using namespace std;

// // T.C = theta(d)   d=no. of digits 
// // apk
// int count_digits(int x)
// {
//     int count=0;
//     int last;
//     while(x!=0){
//         last = x%10;
//         x -= last;
//         if(x!=0){
//             x/=10;
//         }
//         count++;
//     }
//     return count;
// }

// SIMPLE
// T.C = theta(d)
int count_digits(int x)
{
    int count=0;
    while(x>0){
        x /=10;
        count++;
    }
    return count;
}

int main()
{
    int x = 58642;
    
    cout<<"Basics "<<5/10<<endl;
    int res = count_digits(x);
    cout<<res;
}