#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n,m;
	cin>>n>>m;
	int t;
	cin >> t;
	while (t--)
	{
		
		int x,y,a,b,c,d;
		cin>>x>>y>>a>>b>>c>>d;
		int f=1;
		if(x==1||y==1||x==n||y==m)
			f=0;
		if(x-a+x-c==0&&y-b+y-d==0&&f==1){
			cout<<"NO";
		}			
		else
			cout<<"YES";
		cout<<endl;
	}
	
	return 0;
}