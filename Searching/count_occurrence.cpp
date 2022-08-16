#include<bits/stdc++.h>
using namespace std;

int total_occurences(int v[], int n, int x){
    // cout<<"high";
    int low = 0;
    int high = n-1;
    int first = -1, last=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]<x){
            low=mid+1;
        }
        else if(v[mid]>x){
            high = mid-1;
        }
        else{
            if(mid==0 || v[mid]!=v[mid-1]){
                first= mid;
                break;
            }
            else{
                high=mid-1;
            }
        }
    }
    cout<<"The first occurrence at index = "<<first<<endl;
    if(first==-1){
        return 0;
    }
    else{
        int last=first;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(v[mid]<x){
                low=mid+1;
            }
            else if(v[mid]>x){
                high = mid-1;
            }
            else{
                if(mid==n-1 || v[mid]!=v[mid+1]){
                    last= mid;
                    break;
                }
                else{
                    low=mid+1;
                }
            }
        }
        cout<<"The last occurrence at index = "<<last<<endl;
        return(last-first+1);
    }
    
}

int main(){
    cout<<"Find the total occurrences."<<endl;
    int arr[] =  {10, 20, 20, 20, 30, 30};
    
    int x = total_occurences(arr,6, 30);
    cout<<x;

}