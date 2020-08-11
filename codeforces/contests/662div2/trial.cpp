#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
ll mod=1e9+7;
ll fp(ll x,ll p[])
{
    ll temp=x;
    while(p[x]!=x)
    {
        x=p[x];
    }
    p[temp]=x;
    return x;
}
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,ans,x,y;
	    cin>>n;
	    ll p[n+1],s[n+1];
	    for(ll i=1;i<=n;i++)
	    {
	        p[i]=i;
	        cin>>s[i];
	    }
	    ll q;
	    cin>>q;
	    while(q--)
	    {
	        int d;
	        cin>>d;
	        if(d==0)
	        {
	            cin>>x>>y;
	            ll a=fp(x,p);
	            ll b=fp(y,p);
	            if(a==b){cout<<"Invalid query!\n";}
	            else if(s[a]>s[b])
	            {
	                p[b]=a;
	            }
	            else if(s[a]<s[b])
	            {
	                p[a]=b;
	            }
	        }
	        else
	        {
	            cin>>x;
	            ans=fp(x,p);
	            cout<<ans<<"\n";
	        }
	    }
	}
	return 0;
}
