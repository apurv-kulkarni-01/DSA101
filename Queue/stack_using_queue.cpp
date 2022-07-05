#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct Stack{
    queue<int> q1, q2;

    int top(){
        return q1.front();
    }
    void push(int x){
        while(q1.empty()==false){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(q2.empty()==false){
            q1.push(q2.front());
            q2.pop();
        }

    }
    int pop(){
        int p = q1.front();
        q1.pop();
        return p;
    }
    int size(){
        return q1.size();
    }
};

int main(){
    Stack s;
    s.push(50);
    s.push(70);
    s.push(90);
    cout<<s.size()<<endl<<s.top()<<endl;
    cout<<endl<<"Popping- ";
    cout<<s.pop();
    cout<<endl<<s.top()<<endl<<s.size();
}