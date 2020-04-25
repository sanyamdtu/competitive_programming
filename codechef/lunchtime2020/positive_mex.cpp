#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main(){
    int t;
    cin>>t;
    forn(l,t){
        int n;
        cin>>n;
        int s;
        cin>>s;
        int arrp[n];
        forn(i,n)
         cin>>arrp[i];
        int arrd_f[n];
        forn(i,n)
         cin>>arrd_f[i];
         int min_d=INT_MAX,min_f=INT_MAX;
        forn(i,n){
            if(arrd_f[i]==0){
                min_d=min(min_d,arrp[i]);
            }
            else{
                min_f=min(min_f,arrp[i]);
            }
        }
        if(min_d!=INT_MAX&&min_d+min_f+s<100&&min_f!=INT_MAX)
         cout<<"yes"<<endl;
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}