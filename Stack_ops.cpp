#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack{
    int top;

public:
    int a[MAX];

    Stack(){
        top=-1;
    }
    int push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::isEmpty(){
    return(top < 0);
}

int Stack::peek(){
    if(top<0){
        cout<<"Stack is empty";
        return(0);
    }
    else{
        int x =a[top];
        cout<<"peek a boo "<<x;
        return(x);
    }
}

int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        cout<< x <<" popped out the stack";
        return x;
    }
}

int Stack::push(int x){
    if(top+1==MAX){
        cout<<"Stack Overflow";
        return 0;
    }
    else {
        a[++top] = x;
        cout<< x <<" pushed into Stack\n";
        return 1;
    }
}

int main(){
    class Stack s;
    s.push(20);
    s.push(80);
    s.push(50);
    s.push(70);
    s.pop();
    cout<<endl;
    s.peek();
    cout<<endl<<s.isEmpty();

}

