#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){

    // main functions 
    //     push()
    //     pop()
    // returns something:
    //     empty()
    //     size()
    //     top()

    stack<int> s;


    cout<<"Pushing element. "<<endl;
    s.push(10);
    s.push(20);
    s.push(30);


    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    

    cout<<"Poping element. "<<endl;
    s.pop();


    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;

    cout<<"Checking if the stack is empty or not."<<endl;
    auto var = s.empty();

    stack<int> s1;
    auto var1 = s1.empty();
    cout<<var<<endl<<var1;

}