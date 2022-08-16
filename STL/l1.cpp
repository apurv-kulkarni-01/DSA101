#include<bits/stdc++.h>
using namespace std;

namespace apurv{
    int val = 50;
}

void con_array(){
    cout<<"Array a: ";
    array<int, 5> a = {9,8};
    for(int i: a){
        cout<<i<<" ";
    }
    cout<<endl<<"Size: "<<a.size();
    cout<<endl<<"Front: "<<a.front();
    cout<<endl<<"Last: "<<a.back();
    cout<<endl;

    cout<<endl<<"Array b: ";
    array<int, 7> b;
    cout<<endl<<".fill() = ";
    b.fill(69);
    for(int i: b){
        cout<<i<<" ";
    }
    cout<<endl<<".at() = "<<b.at(3);
}

void iterators(){
    // begin()
    // rbegin()  reverse begin
    // end()     points to address right after the last element
    // rend()    right before the first

    array<int, 5> r= {9,6,7,41,6};
    for(auto itr = r.begin(); itr!=r.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    for(auto itr = r.rbegin(); itr!=r.rend();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl<<"Method 2:  ";
    for(auto itr = r.end()-1; itr>=r.begin();itr--){
        cout<<*itr<<" ";
    }


}

int main(){
    // int val = 5;
    double val = 2.001;
    cout<<val<<endl<<endl;

    cout<<"COntainer: Array"<<endl;
    con_array();
    
    cout<<endl<<endl;
    cout<<"Iterator"<<endl;
    iterators();
}