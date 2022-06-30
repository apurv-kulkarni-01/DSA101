#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct TwoStack{
    int *arr, cap, head1, head2;
    TwoStack(int x){
        cap = x;
        arr = new int[cap];
        head1 = -1;
        head2 = cap;
    }
    void push1(int x){
        if(head1<head2-1)
        {
            head1++;
            arr[head1] = x;
        }
    }
    void push2(int x){
        if(head1<head2-1)
        {
            head2--;
            arr[head2] = x;
        }
    }
    int pop1(){
        if(head1>=0)
        {
            int p1 = arr[head1];
            head1--;
            return p1;
        }
        else{
            exit(1);
        }
    }
    int pop2(){
        if(head2<cap)
        {
            int p2 = arr[head2];
            head2++;
            return p2;
        }
        else{
            exit(1);
        }
    }
    void traversal()
    {
        for(int i=0;i<cap;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    TwoStack t(8); 
    t.push1(101);
    t.push2(555);
    t.push1(789);
    t.push2(555);
    t.push1(456);
    t.push2(555);
    t.push1(123);
    t.push2(555);
    t.traversal();
}