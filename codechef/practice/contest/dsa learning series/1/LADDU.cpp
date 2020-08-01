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
		int n;
		cin>>n;
		string origin ;
		cin>>origin;
		string s[n];
		int arr[n];
		int total=0;
		for (int i = 0; i < n; ++i)
		{
			string s;
			cin>>s;
			int k=s.length();
			if(s=="CONTEST_WON"){
				int a;cin>>a;
				total+=300;
			if(a<20)
				total+=20-a;
			}
			else if(s=="TOP_CONTRIBUTOR"){
				total+=300;
			}
			else if(s=="BUG_FOUND"){
				int pr;
				cin>>pr;
				total+=pr;
			}
			else{
				total+=50;
			}
		}
		if(origin=="INDIAN")
				cout<<total/200;
		else
			cout<<total/400;
		cout<<endl;
		
	}
	return 0;
}