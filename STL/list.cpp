#include<iostream>
#include<list>
using namespace std;

int main(){

    // declaration
    list<int> l;

    // initialization 
    list<int> l2 = {10,20,30};

    // iterator
    list<int>::iterator i = l2.begin();
    l2.insert(i, 00);

    for(list<int>::iterator k=l2.begin(); k!=l2.end();k++){
        cout<<*k<<" ";
    }
    cout<<endl;

    // LIST OPERATIONS 
        // push_back(x)
        // push_front(x)
        // pop_back()
        // pop_front()
        // reverse()


    cout<<"Pushing back: 40. "<<endl;
    l2.push_back(40);
    cout<<"Pushing front: -10. "<<endl;
    l2.push_front(-10);
    for(list<int>::iterator k=l2.begin(); k!=l2.end();k++){
        cout<<*k<<" ";
    }
    cout<<endl;


    cout<<"Popping back and front."<<endl;
    l2.pop_back();
    l2.pop_front();
    for(list<int>::iterator k=l2.begin(); k!=l2.end();k++){
        cout<<*k<<" ";
    }
    cout<<endl;


    cout<<"Reversing."<<endl;
    l2.reverse();
    for(list<int>::iterator k=l2.begin(); k!=l2.end();k++){
        cout<<*k<<" ";
    }
    cout<<endl;


    cout<<"Sorting."<<endl;
    l2.sort();
    for(list<int>::iterator k=l2.begin(); k!=l2.end();k++){
        cout<<*k<<" ";
    }
    cout<<endl;


    cout<<"Getting the size of list."<<endl;
    cout<<l2.size()<<endl;


    cout<<"swapping l and l2."<<endl;
    l.swap(l2);
    cout<<l.size()<<endl;
    cout<<l2.size()<<endl;


    cout<<"Merging l and l2."<<endl;
    l.merge(l2);
    cout<<l.size()<<endl;
    cout<<l2.size()<<endl;
}