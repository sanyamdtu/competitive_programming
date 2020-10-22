#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	vector<int> v;
	int sum;
	cin>>sum;
	int i=0,j=n-1;
	while(i<j){
		if(arr[i]+arr[j]==sum){
			v.pb(i+1);
			v.pb(j+1);
			i++;
			j--;
			
		}
		else if(arr[i]>sum-arr[j]){
			j--;
		}
		else{
			i++;
		}
	}
	for (int i = 0; i < v.size();)
	{
		cout<<v[i]<<" "<<v[i+1]<<endl;
		i+=2;
	}
	return 0;
}