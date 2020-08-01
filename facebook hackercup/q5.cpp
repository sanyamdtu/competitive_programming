#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll c[1000000];
ll dp[1000000];
int p[1000000];
ll c1[1000000];
int freq[1000000];

void func(ll dp[],ll c[],int n,int m,int l){
	c[0]=0;
	c[n-1]=0;
	multiset<ll> dps;
	int j=0,f=1;
	dp[0]=0;
	dps.insert(c[0]);
	 for (int i = 1; i < n; ++i)
	 {
		if(m<(i-j)){
			if(c[j]!=0||j==0)
			 dps.erase(dps.find(dp[j]));
			j++;
		}
		if(dps.empty()){
			f=0;
			break;
		}
		dp[i]=*(dps.begin());
		dp[i]+=c[i];
		if(c[i]!=0){
		 dps.insert(dp[i]);
		}
	 } 
	cout<<"Case #"<<l<<": ";
	if(f==0)
		cout<<-1;
	else{
		cout<<dp[n-1];
	}
	cout<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int l = 1; l <=T; ++l)
	{
		int n,m,a,b;
		cin>>n>>m>>a>>b;
		vector<int> lt,rt;
		for (int i = 0; i < n; ++i)
		{
			cin>>p[i];
			cin>>c1[i];
		}
		int j=b-1;
		memset(freq,0,sizeof(freq));
		freq[b]++;
		while(p[j]-1!=j){
			rt.pb(j);
			j=p[j]-1;
			freq[j]++;
		}
		int count=0;
		j=a-1;
		while(freq[j]==0){
			c[count]=c1[j];
			count++;
			j=p[j]-1;
		}
		bool fla=false;
		for (int i = rt.size()-1; i>=0 ; --i)
		{
			if(rt[i]==j)
				fla=true;
			if(fla){
				c[count]=c1[rt[i]];
				count++;
			}
			
		}
		cout<<
		func(dp,c,count,m,l);
	}
	return 0;
}