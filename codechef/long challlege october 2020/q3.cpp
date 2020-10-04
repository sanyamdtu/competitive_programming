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
	int arr[100007];
	memset(arr,0,sizeof(arr));
	for (int i = 2; i <100007 ; i*=2)
	{
		arr[i]=1;
	}
	while (t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		int f=1;
		if(n==1){
			v.pb(1);
		}
		else {
			if(arr[n]==1)
				f=-1;
			else
			{
				v.pb(2);
				v.pb(3);
				v.pb(1);
				int i=4;
				while(i<=n){
					if(arr[i]==1){
						v.pb(i+1);
						v.pb(i);
						i++;
					}
					else
						v.pb(i);
					i++;
				}
			}
		}
		if(f==-1)
			cout<<f;
		else
		{
			for(auto i:v)
				cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}