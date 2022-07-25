#include<bits/stdc++.h>
#include<vector>
using namespace std;

struct Book{
    char Product[5];
    int Price;
    int SeqNum;
    
    vector<vector<int>> P;
    vector<int> P1;
    vector<int> P2;
    vector<int> P3;
    
    P.push_back(P1);
    P.push_back(P2);
    P.push_back(P3);

    void Process(const Book* new Book){
        if(Book.Product=='P1'){
            P1.push_back(Book.Price);
            sort(P1.begin(), P1.end());
        }
        if(Book.Product=='P2'){
            P2.push_back(Book.Price);
            sort(P2.begin(), P2.end());
        }
        if(Book.Product=='P3'){
            P3.push_back(Book.Price);
            sort(P3.begin(), P3.end());
        }
    }

    void Load(int seq, char product){
        cout<<seq<<":"<<product<<"||";
        if(product=='P1'){
            for(int i=0;i<5;i++){
                cout<<P1[i]<<" ";
            }
            cout<<"||";
        }
        if(product=='P2'){
            for(int i=0;i<5;i++){
                cout<<P2[i]<<" ";
            }
            cout<<"||";
        }
        if(product=='P3'){
            for(int i=0;i<5;i++){
                cout<<P3[i]<<" ";
            }
            cout<<"||";
        }
        
        
    }
};



int main(){
    char Product[5];
    int Price;
    int SeqNum;
    cin>>Product>>Price>>SeqNum;
    Book b;
    b.Process(Product,Price,SeqNum);
    Load(SeqNum, Product);
}