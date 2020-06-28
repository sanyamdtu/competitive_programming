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
		ll a,b,c,ans1,ans2;
		cin>>a>>b>>c;
		if(b*a<c){
			ans1=1;
			ans2=-1;
		}
		else if(b*a==c){
			if(b!=pow(10,9))
			ans1=b+1;
		    else
		    	ans1=-1;
			ans2=-1;
		}
		else{
			 if(a>=c){
				ans1=-1;
				ans2=b;
			}
			else {
				ans1=1;
				ans2=b;
			}
		}
		
		cout<<ans1<<" "<<ans2<<endl;

	}
	return 0;
}