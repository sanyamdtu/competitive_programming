#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,q;
	cin>>n>>q;
	int arr[n],map[n+1];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		map[arr[i]]=i;
	}
	set<int> s;
	int in[n];
	for (int i = 0; i < n; ++i)
	{
		s.insert(arr[i]);
		in[i]=distance(s.begin(),s.find(arr[i]))-i;
		in[i]*=-1;
		// cout<<in[i]<<" ";
	}
	//cout<<endl;
	cout<<in[0]<<" ";
	for (int i =1; i < n; ++i)
	{
		in[i]+=in[i-1];
		cout<<in[i]<<" ";
	}
	cout<<endl;
	for (int i = 0; i < q; ++i)
	{
		int l,r;
		cin>>l>>r;
		if(l==1)
			l++;
		int a=in[l-2];
		cout<<in[r-1]-a<<endl<<endl;
	}
	return 0;
}