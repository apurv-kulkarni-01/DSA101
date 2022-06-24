#include<bits/stdc++.h>
using namespace std;

struct Stack{
    int size;
    int *arr;
    int top;
    Stack(int cap){
        size = cap;
        top= -1;
        arr = new int[size];
    }

    void push(int x){
        if(top==size-1){
            cout<<"Overflow.";
        }
        top++;
        arr[top] = x;
    }
    int pop(){
        if(top==-1){
            cout<<"Underflow."<<endl;
        }
        int pop = arr[top];
        top--;
        return pop;
    }
    int peek(){
        if(top==-1){
            cout<<"Underflow."<<endl;
        }
        else{
            return(arr[top]);
        }
    }
    int size_stack(){
        return(top+1);
    }
    bool is_empty(){
        return(top==-1);
    }

};



int main()
{
    Stack s(5);
    cout<<"Is empty = "<<s.is_empty()<<endl;
    cout<<"Size = "<<s.size_stack()<<endl;
    s.push(11);
    cout<<"Peek = "<<s.peek()<<endl;
    s.push(22);
    s.push(33);
    cout<<"Size = "<<s.size_stack()<<endl;
    cout<<"Pop = "<<s.pop()<<endl;
    cout<<"Peek = "<<s.peek()<<endl;
    cout<<"Is empty = "<<s.is_empty()<<endl;
    cout<<"Size = "<<s.size_stack()<<endl;

}