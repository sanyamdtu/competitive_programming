 #include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 998244353
#define INF 1e18
typedef  long long ll;
ll setBitNumber(ll n) 
{ 
    n |= n >> 1; 
    n |= n >> 2; 
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16; 
    n |= n >> 32; 
    n = n + 1; 
    return (n >> 1)%mod; 
} 
  

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	ll arr[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i];
		arr[i]%=mod;
	}
	ll sum=0;
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = i; j < n; ++j)
		{
			ll maxi=0,curr=0;
			for (ll k = i; k <=j; ++k)
			{
				ll s=setBitNumber(arr[k]);
				if(s>maxi){
					curr=0;
					maxi=s;
				}
				if(s==maxi)
					curr++;
			}
			if(j==i){
				sum=(sum+arr[j])%mod;
			}
			else if(j-i==1){
				sum=(sum+setBitNumber(arr[i]^arr[j]))%mod;
			}
			else if(curr%2==1){
				sum=(sum+maxi)%mod;
			}
			else{
				ll o=INT_MAX; 
				for (ll k = i; k <=j; ++k){
					if(setBitNumber(arr[k])==maxi){
						o=min(arr[k],o);
					}
				}
				sum=(sum+(o^setBitNumber(o)))%mod;
			}
			// cout<<i<<" "<<j<<" "<<sum<<endl;
		}
	}
	cout<<sum;
	return 0;
}
