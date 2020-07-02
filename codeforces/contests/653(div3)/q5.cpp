#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

bool comp(book a,book b){
	return a.t<b.t;
}
struct book{
	int t,a,b;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		int n,k;
		cin>>n>>k;
		book b[n];
		for(int i=0;i<n;i++)
			cin>>b[i].t>>b[i].a>>b[i].b;
		sort(b,b+n,comp);
		int p=0,q=0,ans=0;
		for (int i = 0; i < n; ++i)
		{
			if(b[i].a==1&&b[i].b==1){
				ans+=b[i].t;
				p++;
				q++;
			}
			if(p<=k){
				
			}
		}
	return 0;
}