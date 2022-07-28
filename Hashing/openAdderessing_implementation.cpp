#include<bits/stdc++.h>
using namespace std;

// -1 = empty
// -2 = deleted
// linear probing
struct MyHash{
    int bucket, size;
    int arr[];
    MyHash(int x){
        size=0;
        bucket=x;
        for(int i=0;i<bucket;i++){
            arr[i]=-1;
        }
    }
    int hash(int key){
        return key%bucket;
    }

    bool search(int key)
    {
        int h = hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key)
                return true;
            i=(i+1)%bucket;
            if(i==h)
                return false;
        }
        return false;
    }

    bool insert(int key){
        if(size==bucket)
            return false;
        
        int i= hash(key);
        while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key){
            i=(i+1)%bucket;
        }
        if(arr[i]==key)
            return false;
        else{
            arr[i]=key;
            size++;
            return true;
        }
    }

    bool erase(int key){
        int h = hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i=(i+1)%bucket;
            if(i==h){
                return false;
            }
        }
        return false;
    }
};

int main(){
    return 0;
}