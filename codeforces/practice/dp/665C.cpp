#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s,ans;
	cin>>s;
	int n=s.length();
	int a=0;
	int c=1;
	for(int i=0;i<n;i++){
		if(i!=0&&s[i]=='a'+a%26){
			c++;
		}
		else {
			for(int j=2;i!=0&&j<=c;){
				// cout<<"a";
				char ch=(a+1)%26+'a';
				ans.pb(ch);
				 j++;
				if(j<=c)
					ans.pb(a%26+'a');
			    j++;
			}
			if(!ans.empty()&&ans.back()==s[i]){
				ans.pop_back();
				int ch=(a+26-1)%26+'a';
				ans.pb(ch);
			}
			ans.pb(s[i]);
			a=s[i]-'a';
			c=1;
		}
	}
	if(c>1&&n>=2){
		for(int j=2;j<=c;){
				// cout<<"a";
				char ch=(a+1)%26+'a';
				ans.pb(ch);
				 j++;
				if(j<=c)
					ans.pb(a%26+'a');
			    j++;
		}
	}
	cout<<ans;
	return 0;
}