#include<bits/stdc++.h>
#include<list>
using namespace std;

// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data = x;
//         next=NULL;
//     }
// };

// struct chain{
//     Chain(int size){
//         Node arr[size];f
//     }
// };

struct MyHash{
    int bucket;
    list<int> *table;
    MyHash(int b){
        bucket = b;
        table = new list<int>[b];
    }
    void insert(int key){
        int idx = key%bucket;
        table[idx].push_back(key);
    }
    bool search(int key){
        int idx = key%bucket;
        for(auto x: table[idx]){
            if(x==key)
                return true;
        }
        return false;
    }
    void remove(int key){
        int idx = key%bucket;
        table[idx].remove(key);     // Removes all the elements from the list, which are equal to given element.
    }
};

int main(){
    MyHash m(7);
    m.insert(70);
    m.insert(71);
    m.insert(9);
    m.insert(56);
    m.insert(72);
    cout<<m.search(72);
}