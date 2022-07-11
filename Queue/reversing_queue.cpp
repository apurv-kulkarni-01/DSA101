#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

// iterative
void reverse(queue<int> &q){
    stack<int> s;
    while(q.empty()==false){
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==false){
        q.push(s.top());
        s.pop();
    }
}

// recursive
void reverse_r(queue<int> &q){
    if(q.empty())
        return;
    int x = q.front();
    q.pop();
    reverse_r(q);
    q.push(x);
}

int main(){
    queue<int> q;
    q.push(20);
    q.push(30);
    q.push(50);
    q.push(90);
    cout<<"Iterative method\n"<<q.front()<<endl;
    reverse(q);
    cout<<q.front()<<endl;

    cout<<"Recursive method\n"<<q.front()<<endl;
    reverse_r(q);
    cout<<q.front()<<endl;
    
}