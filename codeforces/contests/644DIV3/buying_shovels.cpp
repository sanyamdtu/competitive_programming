#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;    
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans=INT_MAX;
        ll a;
        (100000>k)?a=k:a=100000;
        for(ll i=a;i>=1;i--){
            if(n%i==0){
                ans=(min(ans,n/i));
            }
        }
        if(n<=k)
         cout<<1<<endl;
        else if(ans!=INT_MAX&&n>k){
            cout<<ans<<endl;
        }
    }
    
}