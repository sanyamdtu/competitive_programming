#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int r,c;
bool func(int i,int j,int k,char arr[][101],string s,map<pair<int,int>,bool> vis){
	if(k==10)
		return true;
	bool ans=false;
	if(arr[i][j]!=s[k]||vis[{i,j}]==true)
		return false;
	vis[{i,j}]=true;
	if(i!=0)
		ans=ans|func(i-1,j,k+1,arr,s,vis);
	if(j!=0)
		ans=ans|func(i,j-1,k+1,arr,s,vis);
	if(i!=r-1)
		ans=ans|func(i+1,j,k+1,arr,s,vis);
	if(j!=c-1)
		ans=ans|func(i,j+1,k+1,arr,s,vis);
	if(i!=0&&j!=0)
		ans=ans|func(i-1,j-1,k+1,arr,s,vis);
	if(i!=r-1&&j!=c-1)
		ans=ans|func(i+1,j+1,k+1,arr,s,vis);
	if(i!=0&&j!=c-1)
		ans=ans|func(i-1,j+1,k+1,arr,s,vis);
	if(i!=r-1&&j!=0)
		ans=ans|func(i+1,j-1,k+1,arr,s,vis);
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		cin>>r>>c;
		char arr[r][101];
		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				cin>>arr[i][j];
			}
		}
		
		bool ans=false;
		string s="ALLIZZWELL";
		for (int i = 0; i < r; ++i)
		{
			if(ans==true)
				break;
			for (int j = 0; j < c; ++j)
			{
				if(arr[i][j]=='A'){
					map<pair<int,int>,bool> vis;
					ans=func(i,j,0,arr,s,vis);
				}
				if(ans==true)
					break;
			}
		}
		if(ans)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}