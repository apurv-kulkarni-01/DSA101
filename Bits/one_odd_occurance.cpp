#include<bits/stdc++.h>
#include<vector>
using namespace std;

void odd_occuring(vector<int> v){
    int res = v[0];
    for(int i=1; i<=v.size() ; i++){
        res= res ^ v[i];
    }
    cout<< res;
}

int main(){
    vector<int> v = {8,7,7,8,8};
    odd_occuring(v);
}