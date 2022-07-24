#include<bits/stdc++.h>
using namespace std;

// T.C = O(n)
// Aux.S = O(1)
// apk
bool anagram_check(string str0, string str1){
    if(str0.length()!=str1.length()){
        return false;
    }
    int sum0=0;
    int sum1=0;
    for(int i=0;i<str0.length();i++){
        sum0+=(int)str0[i];
        sum1+=(int)str1[i];
    }
    if(sum0==sum1){
        return true;
    }
    else{
        return false;
    }
}

// T.C = O(nlog(n))
// Aux.S = O(1)
bool are_anagram(string str0, string str1){
    if(str0.length()!=str1.length()){
        return false;
    }
    sort(str0.begin(), str0.end());
    sort(str1.begin(), str1.end());
    return(str0==str1);
}

// T.C = O(n+CHAR)
// Aux.S = O(CHAR)
// BEST 
const int CHAR = 256;
bool are_anagram_best(string str0, string str1){
    if(str0.length()!=str1.length()){
        return false;
    }
    int count[CHAR] = {0};
    for(int i=0;i<str0.length();i++){
        count[str0[i]]++;
        count[str1[i]]--;
    }
    for(int i=0;i<CHAR;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    // string a = "listen";
    // string b = "silent";
    string a = "aaabc";
    string b = "cabaa";
    // bool res = anagram_check(a,b);
    bool res1 = are_anagram_best(a,b);
    cout<<res1;
}