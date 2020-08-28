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
		queue<int> q;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			q.push(a);
		}
		int ans=0;
		while(!q.empty()&&q.front()<=k){
			ans++;
			int num=k;
			while(!q.empty()&&num>=q.front()){
				// cout<<q.front()<<" ";
				num-=q.front();
				q.pop();
			}
		}
		if(q.empty())
			cout<<ans;
		else
			cout<<-1;
		cout<<endl;
	}
	return 0;
}