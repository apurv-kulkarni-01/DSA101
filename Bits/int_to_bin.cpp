#include<iostream>
using namespace std;

void toBinary(int n){
    int a[5];
    for(int i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
    }
    cout<<"THe binary of "<<n<<" is = ";
    int size = sizeof(a)/sizeof(a[0]);
    for(int j=size-1;j>=0;j--){
        if(a[j]==1 || a[j]==0){
            cout<<a[j]<<" ";
        }
        
    }
}

int main()
{
    int num;
    toBinary(2);
}