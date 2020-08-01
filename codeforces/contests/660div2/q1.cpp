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
		int n;
		cin>>n;
		if(n<31){
			cout<<"NO";
		}
		else if(n==31){
			cout<<"YES"<<endl<<10<<" "<<6<<" "<<14<<" "<<1;
		}
		else{
			int x=15,y=n-31;
			if(n-31==6||n-31==10||n-31==15){
				y=n-30;
				x=14;
			}
			cout<<"YES"<<endl<<10<<" "<<6<<" "<<x<<" "<<y;
		}
		cout<<endl;
	}
	return 0;
}