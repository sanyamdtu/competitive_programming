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
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		ll ans=0;
		vector<vector<int>> v(n);
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j <n ; ++j)
			{
				if(arr[i]==arr[j])
					v[i].pb(j);
			}
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	for (auto j:v[i])
		// 	{
		// 		cout<<j<<" ";
		// 	}
		// 	cout<<endl;
		// }
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				int beg=0,last=(int)v[i].size()-1,mid=0,p=INT_MAX,d=INT_MAX;
				while(beg<=last){
					mid=(beg+last)/2;
					if(v[i][mid]==j+1){
						p=mid;
						break;
					}
					else if(v[i][mid]>j+1){
						last=mid-1;
						p=min(mid,p);
					}
					else
						beg=mid+1;
				}
				beg=0,last=(int)v[j].size()-1;
				while(beg<=last){
					mid=(beg+last)/2;
					if(v[j][mid]==j+1){
						d=j+1;
						break;
					}
					else if(v[j][mid]>j+1){
						last=mid-1;
						d=min(mid,d);
					}
					else
						beg=mid+1;
				}
				if(p!=INT_MAX&&d!=INT_MAX){
					ans+=(((int)v[i].size()-p)*((int)v[j].size()-d));
					cout<<(int)v[i].size()-p<<" "<<(int)v[j].size()<<" "<<d<<endl;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}