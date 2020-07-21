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
		ll x,y,z;
		cin>>x>>y>>z;
		int a=1;
		ll p,q,r;
		if(x==y&&x>=z){
			a=0;
			p=x;
			q=z;
			r=z;
		}
		else if(x==z&&x>=y){
			a=0;
			p=x;
			q=y;
			r=y;
		}
		else if(y==z&&z>=x){
			a=0;
			p=y;
			q=x;
			r=x;
		}
		if(a==0){
		 	cout<<"YES"<<endl;	
		 	cout<<p<<" "<<q<<" "<<r;
		}
		
		else 
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}