#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s,t;
	cin>>s>>t;
	int n=s.length();
	int m=t.length();
	vector<int> lps(n,0);
	for (int i = 1,j=0; i < n;)
	{
		if(s[i]==s[j]){
			lps[i++]=++j;
		}
		else if(j>0){
			j=lps[j-1];
		}
		else{
			i++;
		}
	}
	for (int i = 0,j=0; i < m; )
	{
		  
	}
	return 0;
}