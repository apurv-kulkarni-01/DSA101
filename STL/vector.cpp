#include<bits/stdc++.h>
using namespace std;

int main(){
    // declaring vec1, and initializing it with 29 
    vector<int> vec1(4,29);
    for(auto i: vec1){
        cout<<i<<" ";
    }
    cout<<endl<<"Size of vec1 = "<<vec1.size();
    cout<<endl<<"Push back 1... ";
    vec1.push_back(1);
    cout<<endl<<"Size of vec1 = "<<vec1.size()<<endl;
    for(auto i: vec1){
        cout<<i<<" ";
    }
    cout<<endl<<endl<<endl;

    vector<int> vec2(1,3);
    vec2.emplace_back(5);
    vec2.emplace_back(13);
    vec2.push_back(15);
    cout<<"This is vec2 = "<<endl;
    for(auto i: vec2){
        cout<<i<<" ";
    }
    cout<<endl<<endl<<endl;

    // copying vec2 in vec3 
    vector<int> vec3(vec2);
    cout<<"This is vec3 = "<<endl;
    for(auto i: vec3){
        cout<<i<<" ";
    }
    cout<<endl<<endl<<endl;

    // copying only begining 2 elements
    // vector<int> vec4(vec2.begin(), vec2.begin()+2);
    vector<int> vec4(vec2.begin(), vec2.end()-2);
    cout<<"This is vec4 = "<<endl;
    for(auto i: vec4){
        cout<<i<<" ";
    }
    cout<<endl<<endl<<endl;

    swap(vec1, vec2);
    for(auto i: vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i: vec2){
        cout<<i<<" ";
    }

    cout<<endl<<endl<<endl;

    // defining a 10 × 20 vector
    vector<vector <int>> vctr(10, vector<int> (20,0));
    cout<<"Printing the 10 x 20 vector: "<<endl;
    for(auto v: vctr){
        for(auto itr: v){
            cout<<itr<<" ";
        }
        cout<<endl;
    }
}