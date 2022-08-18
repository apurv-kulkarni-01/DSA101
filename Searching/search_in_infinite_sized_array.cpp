#include<bits/stdc++.h>
#include<vector>
using namespace std;

// int infinite(vector<int> v, int x){
//     if(v[x]<=x){
//         int high = x;
//     }
//     int low=v[0];
//     if(x<low){
//         return -1;
//     }
//     else{
//         while(low<=high){
//             int mid = (high+low)/2;
//             if(mid==x){
//                 return mid;
//             }
            
//         }
        

//     }

// }

int search(vector<int> v, int x){
    if(v[0]==x) return 0;
    int i=1;
    while(v[i]<x){
        i=i*2;
    }
    if(v[i]==x) return i;
    

    // binary_search
    int low=i/2+1;
    int high = i-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==x) return mid;
        else if(v[mid]<x){
            low=mid+1;
        }
        else if(v[mid]>x){
            high=mid-1;
        } 
    }

    
    return -1;

}

int main(){
    vector<int> v;
    v.emplace_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    v.emplace_back(33);
    v.emplace_back(41);
    v.emplace_back(50);
    v.emplace_back(60);
    v.emplace_back(70);
    v.emplace_back(80);
    v.emplace_back(90);
    v.emplace_back(99);

    cout<<search(v, 33);
}