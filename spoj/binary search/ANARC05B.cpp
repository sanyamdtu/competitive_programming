#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while(1){
		int n;
		cin>>n;
		if(n==0)
			break;
		int a[n];
		map<int,int>> freq;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			freq[a[i]]=i;
		}
		int m;
		cin>>m;
		int b[m];
		vector<int > v;
		for (int i = 0; i < m; ++i)
		{
			cin>>b[i];
			if(freq[b[i]])
				v.pb(b[i]);
		}
		int sum=0,i=0,j=0;
		while(a[i]!=v[0])
		{
			sum+=a[i];
			i++;
		}
		while(b[j]!=v[0])
		{
			sum+=a[j];
			j++;
		}
		for (; i < n&&j<m; ++i)
		{
			
		}
	}
	return 0;
}