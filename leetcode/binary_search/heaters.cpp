#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int m;
	cin>>m;
	int hou[n],he[m];
	sort(hou,hou+n);
	sort(he,he+m);
	for (int i = 0; i < n; ++i)
	{
		cin>>hou[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>he[i]; 
	}
	
	return 0;
}