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
		int x;
		cin>>x;
		int ans=0,num=1,c=1,i=1;
		while(1){
			// cout<<num<<" ";
			ans+=c;
			if(num==x)
				break;
			num=num*10+i;
			c++;
			if(num>10000){
				num=num%10+1;
				c=1;
				i++;
			}
		}
		cout<<ans<<endl;
		
	}
	return 0;
}