#include<bits/stdc++.h>
using namespace std;

// Aux.S = theta(1)
// T.C = O(n)
// BEST - apk
bool palindrome_checker(string str){
    int low=0;
    int high=str.length()-1;
    while(low<high){
        if(str[low]!=str[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}

// T.C/ Aux.S = theta(n)
bool isPal(string &str){
    string rev = str;
    reverse(rev.begin(), rev.end());
    return(rev==str);
}

int main(){
    string a = "ABA";
    string b = "geeks";
    string c = "ABCDCBA";
    // bool res = palindrome_checker(c);
    bool res1 = isPal(c);
    cout<<res1;
}