#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n,k;
	cin>>n>>k;
	int d=2*k+1;
	// cout<<d;
	vector<int> ans;
	int i=1;
	int rem=0;
	if(n<=2*k+1)
		ans.pb((n+1)/2);
	else{
		while(n>=d){
			ans.pb(n-k);
			n-=d;
		}
		if(n%d<k+1)
			rem=k+1-n%d;
		else
			ans.pb(n%d-k);
	}
	if(k==0)
		rem=0;
	int y=(rem==0)?0:1;
	y+=ans.size();
	cout<<y<<endl;
	if(rem!=0)
		cout<<1<<" ";
	sort(ans.begin(), ans.end());
	for(int i=0;i<ans.size();i++)
	 cout<<ans[i]+rem<<" ";	
	
	return 0;
}