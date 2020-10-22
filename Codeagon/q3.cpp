#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int n,m,k;
double f;
double func(vector<int> arr){
	double ans=0;
	for (int i = 0; i < k; ++i)
	{
		if(arr[i]!=0){
			arr[i]--;
			ans=min(ans,func(arr)+f*(k)*);
			arr[i]++;
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		
		cin>>n>>m>>k;
		f=(double)(((double)1)/m);
		vector<int > arr(k);
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		cout<<"Case #"<<l+1<<": ";

		
	}
	return 0;
}