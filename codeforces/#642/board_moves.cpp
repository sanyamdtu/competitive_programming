#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define pb(x) push_back(x)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    forn(l,t){
        int n;
        cin>>n;
        ll ans=0,c=0;
        ans+=0;
        for(int k=3;k<=n;k+=2){
            ll result=k/2;
             ll est=778*6;
             est=k*56;
            c=ll(k*result*2)+ll(2*result*(k-2));
            
            ans=ans+c;
            ll rest=90990;
            rest=778;
        }
        cout<<ans<<endl;
    }
}