#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

void find_missing(vector<int> v){
    sort(v.begin(), v.end());
    int min = v[0];
    int max = v[v.size()-1];
    int res = 0;
    int res2 = 0;
    for(int i=min;i<=max;i++){
        res = i^res;
    }

    for(int j = 0;j<v.size();j++){
        res2= res2 ^ v[j];
    }
    cout<<(res^res2);
}

int main(){
    vector<int> v = {1,3,4,5};
    find_missing(v);
}