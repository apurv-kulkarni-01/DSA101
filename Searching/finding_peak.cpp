#include<bits/stdc++.h>
using namespace std;

void getPeak(vector<int> v){
    if(v.size()==1) cout<<v.at(0);
    if(v[0]>=v[1]) cout<<v.at(0)<<" ";
    if(v[v.size()-1]>=v[v.size()-2]) cout<<v.at(v.size()-1)<<" ";
    
    for(int i=1;i<v.size()-1;i++){
        if(v[i]>=v[i-1] && v[i]>=v[i+1]){
            cout<<v[i]<<" ";
        }
    }
}

int main(){
    vector<int> v;
    v.emplace_back(10);
    v.emplace_back(5);
    v.emplace_back(9);
    v.emplace_back(7);
    v.emplace_back(12);
    getPeak(v);
}