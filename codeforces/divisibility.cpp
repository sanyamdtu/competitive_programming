#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,ans;
        cin>>a>>b;
        if(a%b==0)
         ans=0;
        else if(a<b){
            ans=b-a;
        }
        else{
            ans=b-(a%b);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}