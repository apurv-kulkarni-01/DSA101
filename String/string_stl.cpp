#include<bits/stdc++.h>
using namespace std;

void prac(){
    string fn = "apurv";
    cout<<endl<<"Length of fn = "<<fn.length()<<endl;
    fn = fn+".kulkarni";
    cout<<fn<<endl;
    cout<<fn.substr(3,6)<<endl;
    cout<<fn.find("ka")<<endl;
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