#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        ll answer_Sum = 0;
        ll west[n];
        for(int i=0;i<n;i++){
            cin>>west[i];
        }
        bool ugses = true;
        if(west[0]<0){
            ugses = false;
        }
        ll curr = 0;
        for(int i=0;i<n;i++){
            if(ugses && west[i]>0 ){
                answer_Sum += west[i];
                curr  = west[i];
                ugses = !ugses;
            }
            else if(!ugses && west[i]>0){
                if(west[i] > curr && curr!=0){
                    answer_Sum -= curr;
                    answer_Sum += west[i];
                    curr = west[i];
                }
            }
            else if(!ugses && west[i]<0){
                answer_Sum += west[i];
                curr  = west[i];
                ugses = !ugses;
            }
            else if(ugses && west[i]<0){
                if(west[i]>curr && curr!=0){
                     answer_Sum -= curr;
                    answer_Sum += west[i];
                    curr = west[i];
                }
            }
        }
        cout<<answer_Sum<<endl;
    }
    return 0;
}