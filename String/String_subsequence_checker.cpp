#include<bits/stdc++.h>
using namespace std;

// T.C = O(n)
// Aux.S = O(1)
// BEST - apk
bool subsequence_checker(string str, string sub_seq){
    if(sub_seq.length()==0){
        return true;
    }
    int j=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==sub_seq[j]){
            j++;
        }
    }
    if(j==sub_seq.length()){
        return true;
    }
    else{
        return false;
    }
}

// recurssive - prac - not better than above

int main(){
    string a = "ABCDE";
    string b = "AED";
    bool res1 = subsequence_checker(a,b);
    cout<<res1;
}