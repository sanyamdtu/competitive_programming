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
	for (int l = 1; l <=t; ++l)
	{
		string s;
		cin>>s;
		int n=s.length();
		char kick[] = "KICK";  
		char st[] = "START";  
		size_t f = s.find(kick);
	 	vector<int> k,sta;
		while(f != string::npos) {
			k.pb(f);
			f = s.find(kick,f+1); 
		}
		size_t ft = s.find(st);	 	
		while(ft != string::npos) {
			sta.pb(ft);
			ft = s.find(st,ft+1); 
		}
		int ans=0;
		for(int i=0,j=0;i<k.size()&&j<sta.size();){
			while(j<sta.size()&&sta[j]<=k[i]){
				j++;
			}
			if(j>sta.size())
				break;
			ans+=(sta.size()-j);
			i++;
		}
		cout<<"Case #"<<l<<": "<<ans<<endl;
	}
	return 0;
}