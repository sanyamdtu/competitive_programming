#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int n,vector<vector<int>> v;,int i,int j){
	if(i==n)
		return 0;
	int ans=min(func(n,v,i+1,j),func(n,v,i+1,j+1))+v[i][j];
		return ans;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	vector<int> v;
	return 0;
}