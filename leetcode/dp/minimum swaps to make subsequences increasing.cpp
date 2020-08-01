#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(vector<int> a1,vector<int> b1,int i,int n,int a ,int b){
	if(i==n)
		return 0;
	if(((a1[i]<a)&&(a>b1[i]))||((b1[i]<b)&&(b>a1[i])))
		return INT_MAX;
	int ans=INT_MAX;
	if(!(a1[i]<a)&&!(b1[i]<b)){
		ans=min(ans,func(a1,b1,i+1,n,a1[i],b1[i]));
	}
	ans=min(ans,func(a1,b1,i+1,n,b1[i],a1[i]));
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	cout<<func(a,b,0,n,INT_MAX,INT_MAX);
	return 0;
}