#include<bits/stdc++.h>
using namespace std;

void reverseWord(string str){
    
  //Your code here
  int tail = str.length()-1;
  for(int i=tail;i>=0;i--){
      cout<<str[i];
  }
}

int main(){
    string g = "Geeks";
    reverseWord(g);
}