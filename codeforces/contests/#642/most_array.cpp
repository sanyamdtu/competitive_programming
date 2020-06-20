#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define pb(x) push_back(x)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        if(n==1)
         cout<<0<<endl;
        else if(n==2)
         cout<<m<<endl;
        else{
            cout<<2*m<<endl;
        }
    }
}