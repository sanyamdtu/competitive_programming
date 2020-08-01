#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

bool func(vector<int> s,map<vector<int>,bool> dp){
	int f=0;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]!=-1)
			f++;
	}
	if(f==1)
		return true;
	if(dp.find(s)!=dp.end())
		return dp[s];
	for (int i = 0; i < s.size()-2; ++i)
	{
		vector<int> v(s.begin(), s.end());
		if(v[i]!=-1){
			int j=i+1,b[2]={-1,-1},count=1;
			while(count!=3&&j<s.size()){
				if(v[j]!=-1){
					b[count-1]=j;
					count++;
				}
				j++;
			}
			if(v[i]!=-1&&b[0]!=-1&&v[1]!=-1){
				int a=v[i]+v[b[1]]+v[b[0]];
				if(a==1){
					v[i]=0;
					v[b[0]]=-1;
					v[b[1]]=-1;
					if(func(v,dp)){
						 dp[v]=true;
						return true;
					}
					
				    else
				    	 dp[v]=false;
				}
				else if(a==2){
					v[i]=1;
					v[b[0]]=-1;
					v[b[1]]=-1;
				    if(func(v,dp)){
						 dp[v]=true;
						return true;
					}
				    else
				    	 dp[v]=false;
				}
			}
		}
	}
	dp[s]=false;
	return false;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int l=1;l<=t;l++)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		n=s.length();
		// cout<<n;
		vector<int> v(n);
		int a=0,b=0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='A'){
				a++;
				v[i]=1;
			}
			else{
				b++;
				v[i]=0;
			}
		}
		// cout<<" "<<a<<" "<<b;
		// map<vector<int>,bool> dp;
		cout<<"Case #"<<l<<":";
		 // if(func(v,dp))
		if(abs(a-b)<=1)
			cout<<"Y";
		else 
		 cout<<"N";
		cout<<endl;
	}
	return 0;
}