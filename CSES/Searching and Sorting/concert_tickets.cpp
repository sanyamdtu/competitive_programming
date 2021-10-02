#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;
	cin>>n>>m;
	ll h[n],t[m];
	multiset<ll> s;
	for (int i = 0; i < n; ++i)
	{
		cin>>h[i];
		h[i]=-h[i];
		s.insert(h[i]);
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>t[i];
		t[i]=-t[i];
	}
	for (int i = 0; i < m; ++i)
	{	
		auto idx=s.lower_bound(t[i]);
		if(idx==s.end()||(*(idx)<t[i]))
			cout<<-1;
		else
		{
			cout<<-(*(idx));
			s.erase(idx);
		}
		cout<<endl;
	}


}