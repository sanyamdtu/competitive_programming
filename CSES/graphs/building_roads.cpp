#include<bits/stdc++.h>
using namespace std;
struct edge{
	int x,y,w;
};
int par[200000],r[200000];
int find(int x){
	if(x==par[x])
		return x;
	return par[x]=find(par[x]);
}
void un(int x,int y){
	int px=find(x);
	int py=find(y);
	if(px==py)
		return ;
	if(r[px]<r[py])
		par[px]=py;
	else if(r[px]>r[py])
		par[py]=px;
	else{
		par[px]=py;
		r[py]++;
	}
}
int main(){
	int n,t;
	cin>>n>>t;
	for (int i = 1; i <= n; ++i)
	{
		par[i]=i;
	}
	memset(r,0,sizeof(r));
	vector<int> v;
	
	for (int i = 0; i < t; ++i)
	{
		int x,y;
		cin>>x>>y;
		un(x,y);
	}
	unordered_map<int,int> m;
	for (int i = 1; i <=n; ++i)
	{
		m[find(i)]=i;
	}
	int ans=m.size()-1;
	
	for(auto i:m){
		v.push_back(i.second);
	}
	cout<<ans<<endl;
	for (int i = 0; i < v.size()-1; ++i)
	{
		cout<<v[i]<<" "<<v[i+1]<<endl;
	}
}
