#include <bits/stdc++.h>
using namespace std;
struct node{
	int s,e;
};
bool comp(node a,node b){
	if(a.s==b.s){
		return a.e>b.e;
	}
	return (a.s<b.s);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<node>v;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			int temp=0;
			for (int j = 0; j < a; ++j)
			{
				int b;
				cin>>b;
				temp=max(temp,b-j+1);
			}
			v.push_back({temp,a});
		}
		sort(v.begin(), v.end(),comp);
		int ans=0,c=0;
		for (int i = 0; i < v.size(); ++i)
		{
			
			if(ans+c<v[i].s){
				ans=v[i].s-c;
			}
			c+=v[i].e;
		}
		cout<<ans<<endl;
	}
	
}