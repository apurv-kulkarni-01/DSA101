#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
    vector<int> P1;
    vector<int> P2;
    vector<int> P3;
    int test=1;
    
    string p;
    int price;
    int seq_no;

    while(test!=0){
        cin>>test;
        cin>>p>>price>>seq_no;
        if(p=='P1'){
            P1.push_back(price);
            sort(P1.begin(), P1.end());
        }
        if(p=='P2'){
            P2.push_back(price);
            sort(P2.begin(), P2.end());
        }
        if(p=='P3'){
            P3.push_back(price);
            sort(P3.begin(), P3.end());
        }
        cout<<seq_no<<":"<<p<<"||";
        if(p=='P1'){
            for(int i=0;i<5;i++){
                cout<<P1[i]<<" ";
            }
            cout<<"||";
        }
        if(p=='P2'){
            for(int i=0;i<5;i++){
                cout<<P2[i]<<" ";
            }
            cout<<"||";
        }
        if(p=='P3'){
            for(int i=0;i<5;i++){
                cout<<P3[i]<<" ";
            }
            cout<<"||";
        }
    }
}