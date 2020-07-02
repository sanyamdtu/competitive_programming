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
		ll n,ans=0;
		cin>>n;
		if(n==1)
			ans=0;
		else {
			if(n%3==0){
				bool flag=true;
				int count=0;
				while(flag&&n>1){
					if(n%6==0){
						n=n/6;
						count++;
					}
					else{
						count++;
						n=n*2;
					}
					if(n%3!=0&&n!=1)
						flag=false;
				}
				if(n==1)
					ans=count;
				else 
					ans=-1;
			}
			else{
				ans=-1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}