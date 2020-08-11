#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef   long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int ans[n];
		set<int,greater <int>> v1,v0;
		int a1=0,a0=0;
		ans[0]=1;
		if(s[0]=='1'){
			a1=1;
			v1.insert(1);
		}
		else{
			a0=1;
			v0.insert(1);
		}
			
		 for (int i = 1; i < n; ++i)
		 {
		 	
		 		if(s[i]=='0'){
		 			if(a1!=0){
		 				ans[i]=*(v1.begin());
		 				v1.erase(v1.begin());
		 				a1--;
		 			}
		 			else{
		 				ans[i]=*(v0.begin())+1;
		 			}
		 			a0++;
		 			v0.insert(ans[i]);
		 		}
		 		else{
		 			if(a0!=0){
		 				ans[i]=*(v0.begin());
		 				v0.erase(v0.begin());
		 				a0--;
		 			}
		 			else{
		 				ans[i]=*(v1.begin())+1;
		 			}
		 			a1++;
		 			v1.insert(ans[i]);
		 		}
		 }
		int si=0;
		for (int i = 0; i < n; ++i)
		{
			si=max(si,ans[i]);
		}
		cout<<si<<endl;
		for (int i = 0; i < n; ++i)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}