#include <bits/stdc++.h>
using namespace std;
struct node {
	int s,e;
};
struct comp{
	bool operator()(node &a,node &b){
		if(a.e==b.e){
			return a.s>b.s;
		}
		return a.e>b.e;
	}
};
priority_queue<node,vector<node>,comp> q;
priority_queue<int,vector<int>,greater<int> > temp;
int main(){
	int n,k;
	cin>>n>>k;
	node arr[n];
	for (int i = 0; i < n; ++i)
	{
		int a,b;
		cin>>a>>b;
		q.push({a,b});
	}
	int ans=0;
	while(!q.empty()){

	}

}