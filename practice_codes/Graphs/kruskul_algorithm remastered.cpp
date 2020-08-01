#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct edge{
	int v1,v2,w;
};
bool comp(edge a ,edge b){
	return a.w<b.w;
}
bool func(int pa[],int a,int b){
	int pa1=a,pa2=b;
	while(pa1!=pa[pa1]){
		pa1=pa[pa1];
	}
	while(pa2!=pa[pa2]){
		pa2=pa[pa2];
	}
	return (pa1!=pa2);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,ne;
	cin>>n>>ne;
	vector<edge> v;
	vector<edge> ans;
	for (int i = 0; i < ne; ++i)
	{
		edge e;
		cin>>e.v1>>e.v2>>e.w;
		v.pb(e);
	}
	sort(v.begin(), v.end(),comp);
	int par[n];
	for (int i = 0; i < n; ++i)
	{
		par[i]=i;
	}
	int c=0,i=0;
	while(c<n-1){
		if(func(par,v[i].v1,v[i].v2)){
			ans.pb(v[i]);
			c++;
		}
		i++;
	}
	for (int i = 0; i < n-1; ++i)
		cout<<ans[i].v1<<" "<<ans[i].v2<<" "<<ans[i].w<<endl;
	return 0;
}