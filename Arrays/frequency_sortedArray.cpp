#include<bits/stdc++.h>
using namespace std;

void freq(vector<int> v){
    int n = v.size();
    int freq = 1, i=1;
    while(i<n){
        while(i<n && v[i]==v[i-1]){
            freq++;
            i++;
        }
        cout<<"Freq of "<<v[i-1]<<" "<<freq<<endl;
        freq = 1;
        i++;
    }
    if(n==1 || v[n-1]!=v[n-2]){
        cout<<"Freq of "<<v[n-1]<<" "<<1<<endl;
    }

}

int main(){
    vector<int> v = {10,10,10,30,30,40};
    freq(v);
}