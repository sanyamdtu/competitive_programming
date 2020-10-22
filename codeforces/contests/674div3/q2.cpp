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
		int f=0;
		for (int i = 0; i < n; ++i)
		{
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			if(b==c)
				f=1;
		}
		if(m%2==0&&f==1)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}