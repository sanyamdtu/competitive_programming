#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    forn(l,t){
        ll floors=0;
        ll curr=0;
        ll n,q;
        cin>>n>>q;
        forn(i,q){
          ll a,b;
          cin>>a>>b;
          floors+=abs(a-curr);
          floors+=abs(b-a);
          curr=b;
        }
        cout<<floors<<endl;
    }
    return 0;
}