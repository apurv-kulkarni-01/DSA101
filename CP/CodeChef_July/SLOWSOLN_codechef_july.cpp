#include <iostream>
#include <vector>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int maxT, maxN, sumN;
        int diff=999;
        int sqSum=0;
        cin>>maxT>>maxN>>sumN;
        
        for(int i=0;i<maxT;i++){
            diff=sumN-maxN;
            sumN=diff;
            cout<<endl<<"difference==="<<diff<<endl;
            sqSum+=(maxN*maxN);
            cout<<endl<<"sq==="<<sqSum<<endl;
            if(diff<maxN){
                maxN=diff;
            }
            if(diff==0){
                break;
            }
        }
        cout<<sqSum<<endl;
    }
    return 0;
}
