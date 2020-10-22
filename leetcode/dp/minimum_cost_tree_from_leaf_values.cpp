#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
pair<int,int> func(int arr[],int s,int e){
	if(s==e)
		return {0,arr[s]};
	pair<int,int> ans={INT_MAX,INT_MAX};
	for (int i = s; i <e; ++i)
	{
		auto a=func(arr,s,i);
		auto b=func(arr,i+1,e);
		if(ans.first>a.first+b.first+a.second*b.second||(ans.first==a.first+b.first+a.second*b.second&&ans.second>max(a.second,b.second)))
			ans={a.first+b.first+a.second*b.second,max(a.second,b.second)};
	}
	return ans;
}

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
	cout<<func(arr,0,n-1).first;
	return 0;
}