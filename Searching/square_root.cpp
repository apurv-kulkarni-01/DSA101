#include<bits/stdc++.h>
using namespace std;

int sqRoot(int x){
    int low = 1, ans = -1;
    int high = x;
    while(low<=high){
        int mid = (low+high)/2;
        int midSq =pow(mid,2); 
        if(midSq==x){
            return mid;
        }
        else if(midSq>x){
            high = mid-1;
        }
        else{
            low=mid+1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
    int x = 15;
    cout<<sqRoot(x);
}