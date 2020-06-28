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
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int count=0,size=0,n1=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				size=0;
				n1=1;
			}
			else if(s[i]=='0'){
				size++;
			}
			if(n1==0&&size==k+1){
				n1=1;
				size=k;
				count++;
			}
			 else if(size==2*k+1){
				size=k;
				count++;
			}
		}
		if(size==k+1)
		    count++;
		else if(n1==0&& s.length()<=k)
			count++;
		cout<<count<<endl;
		
	}
	return 0;
}