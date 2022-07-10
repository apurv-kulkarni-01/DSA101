#include<bits/stdc++.h>
using namespace std;

int main(){
    // int cases;
    // int total;
    // int arr[3];
    
    // cin>>cases;
    
    // for(int i=0;i<cases;i++){
    //     total=0;
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j];
    //         total=total+arr[j];
    //         cout<<"TTTT"<<total<<endl;
    //         if(arr[j]<10){
    //             goto fail;
    //         }
    //     }
    //     if(total<100){
    //         cout<<"FAIL"<<endl;
    //         continue;
    //     }
    //     else{
    //         cout<<"PASS"<<endl;
    //         continue;
    //     }
        
    //     fail:
    //         cout<<"FAIL"<<endl;
    //         break;
        
    // }

    int cases;
    cin>>cases;
    while(cases--){
        int a,b,c;
        cin>>a>>b>>c;
        int total = a+b+c;
        if(total>=100&&(a>=10&&b>=10&&c>=10)){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIL"<<endl;
        }
    }
}