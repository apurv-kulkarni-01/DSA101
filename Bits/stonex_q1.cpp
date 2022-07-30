#include<bits/stdc++.h>
#include<vector>
using namespace std;

// given a number n -> find its binary equivalent -> reverse it -> and then calculate its decimal equivalent(not to be done).


vector<int> reverBin(int n){
    int no_of_bits = 32;
    vector<int> b(no_of_bits);
    
    for(int i=0;n>0;i++){
        b[i]=n%2;
        n/=2;
    }
    int k = no_of_bits-1;
    while(b[k]!=1){
        k--;
    }
    vector<int> b_filtered(b.begin(), b.begin()+k+1);
    return b_filtered;
}


int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}


int main(){
    int num;
    cout<<"Number to be converted into binary and then reverse its binary digit order: ";
    cin>>num;
    vector<int> ans = reverBin(num);
    cout<<"\nReturned binay array is : "<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<"\nThe number corresponding to the binary digits is: "<<endl;
    int bin_no=0;
    int count=0;
    for(int j=0; j<ans.size();j++){
        bin_no+=ans[j];
        bin_no*=10;
    }
    bin_no/=10;
    int dec = binaryToDecimal(bin_no);
    cout<<dec;
}