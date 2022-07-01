#include<bits/stdc++.h>
using namespace std;

struct MyQueue{
    int *arr;
    int size, cap;
    MyQueue(int x){
        cap = x;
        arr = new int[cap];
        size=0;
    }
    void enqueue(int x){
        if(size<cap){
            arr[size]=x;
            size++;
        }
        else{
            cout<<endl<<"-->Overflow<--"<<endl<<endl;
        }
    }
    int dequeue(){
        int del = arr[0];
        for(int i=0;i<size-1;i++)                 // and not  for(int i=0;i<size-2;i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
        return(del);
    }
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return(arr[0]);
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return(arr[size-1]);
    }
    bool isFull(){
        return(size==cap);              //and not   size==cap-1
    }
    bool isEmpty(){
        return(size==0);
    }
    int Size(){
        return(size);
    }
};

int main(){
    MyQueue q(5);
    cout<<"Is full: "<<q.isFull()<<endl;
    cout<<"Is empty: "<<q.isEmpty()<<endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<"Get front: "<<q.getFront()<<endl;
    cout<<"Get rear: "<<q.getRear()<<endl;
    cout<<"SIZE: "<<q.Size()<<endl;
    cout<<"Is full: "<<q.isFull()<<endl;
    cout<<"Is empty: "<<q.isEmpty()<<endl;
    
    cout<<"Dequeue: "<<q.dequeue()<<endl;

    cout<<"SIZE: "<<q.Size()<<endl;
    cout<<"Is full: "<<q.isFull()<<endl;
    cout<<"Is empty: "<<q.isEmpty()<<endl;
}