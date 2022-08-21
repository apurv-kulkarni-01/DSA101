#include<bits/stdc++.h>
using namespace std;

// basic implementation
    // struct deque{
    //     int size, cap;
    //     int *arr;
    //     deque(int c){
    //         cap = c;
    //         arr = new int[c];
    //         size = 0;
    //     }
    //     bool isFull(){ return(size==cap);}
    //     bool isEmpty(){ return(size);}
    //     void insertRear(int x){
    //         if(isFull()) return;
    //         arr[size] = x;
    //         size++;
    //     }
    //     void deleteRear(){
    //         if(isEmpty()) return;
    //         size--;
    //     }
    //     int getRear(){
    //         if(isEmpty()) return -1;
    //         else{
    //             return(arr[size-1]);
    //         }
    //     }
    //     int getFront(){
    //         if(isEmpty()) return -1;
    //         else{
    //             return arr[0];
    //         }
    //     }
    // };


// efficient solution


struct Deque{
    int size, cap, front;
    int *arr;
    Deque(int c){
        cap = c;
        arr = new int[c];
        size = 0;
        front = 0;
    }
    bool isFull(){ return(size==cap);}
    bool isEmpty(){ return(size==0);}
    void insertRear(int x){
        if(isFull()) return;
        int new_rear = (front+size)%cap;
        arr[new_rear] = x;
        size++;
    }
    void deleteRear(){
        if(isEmpty()) return;
        size--;
    }
    int getRear(){
        if(isEmpty()) return -1;
        else{
            return (front+size-1)%cap;
        }
    }
    int getFront(){
        if(isEmpty()) return -1;
        else{
            return front;
        }
    }
    void insertFront(int x){
        if(isFull()) return;
        int front = (front+cap-1)%cap;
        arr[front] = x;
        size++;
    }
    void deleteFront(){
        if(isEmpty()) return;
        front = (front+1)%cap;
        size--;
    }
};

int main(){
    Deque myQueue(4);
    myQueue.insertFront(10);
    cout<<myQueue.getFront()<<endl;
    cout<<myQueue.size<<endl;
    myQueue.insertRear(20);
    cout<<myQueue.getRear()<<endl;
    myQueue.insertRear(30);
    cout<<myQueue.getFront()<<endl;
    cout<<myQueue.getRear()<<endl;
}