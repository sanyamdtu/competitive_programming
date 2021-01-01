#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin>>n;
		queue<pair<ll,string>> q;
		q.push({1%n,"1"});
		while(!q.empty()){
			auto a=q.front();
			q.pop();
			if(a.first==0){
				cout<<a.second<<endl;
				break;
			}
			q.push({(a.first*10)%n,a.second+"0"});
			q.push({((a.first*10)+1)%n,a.second+"1"});
		}
	}
	return 0;
}