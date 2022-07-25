#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    string org;
    int in, out;
    int totA=0;
    int totB=0;
    int totC=0;
    int OrganisationA[24] = {0};
    int OrganisationB[24] = {0};
    int OrganisationC[24] = {0};
    for(int i=0;i<test;i++){
        cin>>org>>in>>out;
        if(org=="OrganisationA"){
            for(int i=in;i<out;i++){
                OrganisationA[i]++;
            }
        }
        else if(org=="OrganisationB"){
            for(int i=in;i<out;i++){
                OrganisationB[i]++;
            }
        }
        else if(org=="OrganisationC"){
            for(int i=in;i<out;i++){
                OrganisationC[i]++;
            }
        }
    }

    // processing
    // A 
    for(int i=0;i<24;i++){
        if(OrganisationA[i]>0){
            if(OrganisationA[i]==1){
                totA += 100;
            }
            else if(OrganisationA[i]==2){
                totA+=150;
            }
            else if(OrganisationA[i]==3){
                totA+=200;
            }
            else if(OrganisationA[i]>3){
                for(int car=OrganisationA[i];car>3;car--){
                    totA+=20;
                }
                totA+=200;
            }
        }
    }

    // B 
    for(int i=0;i<24;i++){
        if(OrganisationB[i]>0){
            if(OrganisationB[i]==1){
                totB += 100;
            }
            else if(OrganisationB[i]==2){
                totB+=150;
            }
            else if(OrganisationB[i]==3){
                totB+=200;
            }
            else if(OrganisationB[i]>3){
                for(int car=OrganisationB[i];car>3;car--){
                    totB+=20;
                }
                totB+=200;
            }
        }
    }


    for(int i=0;i<24;i++){
        if(OrganisationC[i]>0){
            if(OrganisationC[i]==1){
                totC += 100;
            }
            else if(OrganisationC[i]==2){
                totC+=150;
            }
            else if(OrganisationC[i]==3){
                totC+=200;
            }
            else if(OrganisationC[i]>3){
                for(int car=OrganisationC[i];car>3;car--){
                    totC+=20;
                }
                totC+=200;
            }
        }
    }

    // printing results 

    cout<<"Organisation A bill:"<<totA<<endl;
    cout<<"Organisation B bill:"<<totB<<endl;
    cout<<"Organisation C bill:"<<totC<<endl;

}