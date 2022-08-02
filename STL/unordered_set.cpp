#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// functions:
//     insert()
//     begin()     i
//     end()       i
//     size()
//     clear()
//     find()      i



int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(15);
    // cout<<*(s.find(544));
    int n = 20;
    // cin>>n;
    if(s.find(n)==s.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found"<<*(s.find(n));
    }
    cout<<endl<<(s.size());
    cout<<endl<<endl;
    for(auto i = s.begin(); i!=s.end(); i++){
        cout<<*i<<" ";
    }
}