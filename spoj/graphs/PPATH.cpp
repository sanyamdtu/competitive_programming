#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int prime[10004];
int p,r;
int atoi(string a){
	int ans=0;
	for (int i = 0; i < 4; ++i)
	{
		ans=a[i]-'0'+ans*10;
	}
	return ans;
}
void func(string p,int num,unordered_map<int,list<int>> &g){
	for (int i = 0; i < 4; ++i)
	{
		char ch=p[i];
		for (int j = '0'; j <='9'; ++j)
		{
			if((i==0&&j=='0'))
				continue;
			else{
				p[i]=j;
				if(prime[atoi(p)]==1&&atoi(p)!=num)
				g[num].pb(atoi(p));
			}
		}
		p[i]=ch;
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int i = 0; i < 10004; ++i)
	{
		prime[i]=1;
	}
	for (int i = 2; i <10000 ; ++i)
	{
		if(prime[i]==1)
		for (int j = i*i; j < 10000; j+=i)
		{	
			prime[j]=0;
		}
	}
	// cout<<prime[2]<<" "<<prime[3]<<" "<<prime[4]<<endl;
	unordered_map<int,list<int>> g;
	for (int i = 1000; i <=9999; ++i)
	{
		if(prime[i]==1){
			string p="aaaa";
			// cout<<"op ";
			int num=i;
			for (int j = 3; j >=0; --j)
			{
				p[j]=num%10+'0';
				num/=10;
			}
			func(p,i,g);
		}
	}

	// for(auto i:g){
	// 	if(i.first==1733)
	// 	cout<<i.first<<"->";
	// 	if(i.first==1733)
	// 	for (auto j:i.second)
	// 	{
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<endl;
	// }
	int t;
	cin >> t;
	while (t--)
	{
		cin>>p>>r;
		unordered_map<int,int> level,vis;
		vis[p]=1;
		queue<int> q;
		q.push(p);
		int ans=INT_MAX;
		while(!q.empty()){
			int a=q.front();
			q.pop();
			// cout<<a<<" ";
			if(a==r)
			{
				ans=level[a];
				break;
			}
			for (auto j:g[a])
			{
				if(vis[j]==0){
					q.push(j);
					vis[j]=1;
					level[j]=level[a]+1;
				}
			}
		}
		if(ans==INT_MAX)
			cout<<"Impossible";
		else
			cout<<ans;
		cout<<endl;
	}
	return 0;
}