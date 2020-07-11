#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin>>s;
	int n=s.length();
	ll ans=0;
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i]=s[i]-'0';
	for(int i=0;i<n;i++){
			if(arr[i]%4==0)
				ans++;
			if(i<n-1&&(arr[i]*10+arr[i+1])%4==0)
				ans+=i+1;
	}
	cout<<ans;
	return 0;
}