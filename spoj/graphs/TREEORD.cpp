#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int pre[8001],post[8001],in[8001];
bool func(int i,int j,int k,int len){
	if(len==0)
		return true;
	if(len==1)
		return (pre[i]==post[j])&&(pre[i]==in[j]);
	int idx=-1;
	for (int i = 0; i < len; ++i)
	{
		if(in[i])
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>pre[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>post[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>in[i];
	}
	return 0;
}