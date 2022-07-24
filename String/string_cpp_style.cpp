#include<bits/stdc++.h>
using namespace std;

void prac(){
    string fn = "apurv";
    // length 
    cout<<endl<<"Length of fn = "<<fn.length()<<endl;
    fn = fn+".kulkarni";
    cout<<fn<<endl;
    // substring (leading index, length of substring)
    cout<<fn.substr(3,6)<<endl;
    // search a string in a given string 
        // if no position is found = nPos is returned
    cout<<fn.find("ka")<<endl;

    // less than and greater than 
    string a = "abc";
    string b = "def";
    if(a==b){
        cout<<"Same";
    } else if(a<b){
        cout<<"less";
    } else{cout<<"greater";}
}

int main()
{
    string str = "hello world!";
    cout<<str;
    prac();
    cout<<endl;
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i];
    }
}