#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k;
    cin>>n>>k;	
    string s;
    cin>>s;
    int freq[26];
    for (int i = 0; i < 26; ++i)
    {
    	freq[i]=0;
    }
    for (int i = 0; i < n; ++i)
    {
    	freq[s[i]-'A']++;    	
    }
    sort(freq,freq+26);
    ll ans=0;
    for (int i = 25; i >=0&&k>0; i--)
    {
    	if(freq[i]>=k){
    		ans+=static_cast<long long>(k)*static_cast<long long>(k)	;
    		k=0;
    	}
    	else {
    		ans+= static_cast<long long>(freq[i])*static_cast<long long>(freq[i]);
    		k-=freq[i];
    	}
    }
    cout<<ans;
	return 0;
}