#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		ll n,num;
		cin>>n;
		num=n;
		vector<ll> ans;
		ll i=2,count=0;
		while(i<=sqrt(num)&&count<2){
			if(n%i==0){
				ans.pb(i);
				n=n/i;
				count++;
			}
			i++;
		}
		if(count==2&&n!=ans[0]&&n!=ans[1])	{
		ans.pb(n);
		count++;	
		}
		
		if(count==3){
			cout<<"Yes"<<endl;
			cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
		}
		else
			cout<<"No"<<endl;
	}
	return 0;
}