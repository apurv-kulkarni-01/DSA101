#include<bits/stdc++.h>
using namespace std;

void fname(char name[]){
    int size = strlen(name);
    for(int i=0;i<size;i++){
        cout<<name[i]<<" ";
    }
    cout<<endl<<name<<endl;
}

void city(){
    char city[50];
    cout<<"Enter city name: ";
    cin>>city;

    cout<<"Entered city is "<<city;
}

int main(){
    char str[] = "Apurv Kulkarni";
    cout<<str<<endl<<str[6]<<endl<<endl;
    fname(str);
    city();
}