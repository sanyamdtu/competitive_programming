#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	string s;
	cin>>s;
	int n=s.length();
	string str; 
	int count=0;
	for(int i=0;i<n;i++){
		if(s[i]=='v'){
			if(count==0)
				count=1;
			else
				str.pb('w');
		}
		else{
			count=0;
			str.pb(s[i]);
		}
	}	
	s=str;
	n=s.length();
	// cout<<s;
	ll a=0,b=0,c=0;
	for(int i=0;i<n;i++){
		if(s[i]=='o')
			b+=a;
		else{
			a++;
			c+=b;
		}
	}
	cout<<c;
	return 0;
}