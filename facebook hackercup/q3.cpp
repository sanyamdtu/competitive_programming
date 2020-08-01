#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct tree{
	ll p,h,i;
};
struct modi
{
	ll s,f,i,p;
};
bool comp(modi a,modi b){
	return a.f<b.f;
}
tree arr[800000];
ll dp[1600000];
modi l[1600000];
int freq[800000];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int loe=1;loe<=t;loe++)
	{
		int n;
		cin>>n;		
		memset(dp,0,sizeof(dp));
		
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i].p>>arr[i].h;
			arr[i].i=i;
		}
		for (int i = 0,j=0; i < n; i++)
		{
			l[j].i=i;
			int temp1=arr[i].p;
			int temp2=arr[i].p-arr[i].h;
			l[j].f=max(temp1,temp2);
			l[j].s=min(temp1,temp2);
			l[j].p=l[j].f-l[j].s;
			j++;
			l[j].i=i;
			temp2=arr[i].p+arr[i].h;
			l[j].f=max(temp1,temp2);
			l[j].s=min(temp1,temp2);
			l[j].p=l[j].f-l[j].s;
			j++;
		}
		sort(l,l+2*n,comp);
		map<ll,multiset<ll>> m;
		m[l[0].f].insert(-1*l[0].p);
		dp[0]=l[0].p;
		memset(freq,-1,sizeof(freq));
		freq[l[0].i]=0;
		for (int i = 1; i < 2*n; ++i)
		{

			 ll inclPro=l[i].p,idx=0;
			 if(m.find(l[i].s)!=m.end()){	
			 	idx=*(m[l[i].s].begin());
			 	idx=-1*idx;
			 	
			 	if(freq[l[i].i]>=0){
			 		 
		 			if(m[l[i].s].size()<=1){
		 				idx=0;
		 			}
		 			else if(dp[freq[l[i].i]]==idx){
		 				int c=0;
		 				for(auto itr:m[l[i].s]){
		 					idx=-1*itr;
		 					c++;
		 					if(c==2)
		 						break;
		 				}		 				
		 			}
			 	}
			 }
			 inclPro+=idx;
			 dp[i]=inclPro;
			 freq[l[i].i]=i;
			 m[l[i].f].insert(-1*inclPro);
		}
		ll ans=0;
		for (int i = 0; i < 2*n; ++i)
		{
			ans=max(ans,dp[i]);
		}
		cout<<"Case #"<<loe<<": ";
		cout<<ans<<endl;
	}
	return 0;
}