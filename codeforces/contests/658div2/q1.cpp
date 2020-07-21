#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		int freq[10001];
		memset(freq,0,sizeof(freq));
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			freq[a[i]]++;
		}
		int ans=0;
		for (int i = 0; i < m; ++i)
		{
			cin>>b[i];
			if(ans==0&&freq[b[i]]>=1)
				ans=b[i];
		}
		if(ans==0)
			cout<<"NO";
		else{
			cout<<"YES"<<endl;
			cout<<1<<" "<<ans;
		}
		cout<<endl;		
	}
	return 0;
}