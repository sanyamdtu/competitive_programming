#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
#define MAXI 10000000
typedef  long long ll;
double poww(int n,int a){
	return n*log10(a);
}
double logi[MAXI];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	
	logi[1]=0;
	for (int i = 2; i < MAXI; ++i)
	{
		logi[i]=log10(i)+logi[i-1];
	}
	// for (int i = 0; i < 19; ++i)
	// {
	// 	cout<<logi[i]<<" ";
	// }
	// cout<<logi[MAXI-1];
	while (t--)
	{
		int a;
		cin>>a;
		ll beg=2,last=MAXI-1,ans=MAXI-1;
		while(beg<=last){
		    ll mid=(beg+last)/2;
		    // cout<<mid<<" ";
			if(logi[mid]>poww(mid,a)){
				ans=min(ans,mid);
				last=mid-1;
			}
			else
				beg=mid+1;
		}
		// cout<<logi[ans]<<" "<<poww(a,ans)<<endl;
		cout<<ans<<endl;
	}
	return 0;
}