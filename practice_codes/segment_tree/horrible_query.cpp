#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;


void update(int *lazy,int *tree,int tnode,int s,int e,int l,int r,int del){
    if(lazy[tnode]!=0){
		tree[tnode]+=(e-s+1)*lazy[tnode];
		if(s!=e){
			lazy[2*tnode]+=lazy[tnode];
			lazy[2*tnode+1]+=lazy[tnode];
		}
		lazy[tnode]=0;
	}
	if(s>r||e<l)
        return ;
	if(s>=l&&e<=r){
		tree[tnode]+=(e-s+1)*del;
		if(s!=e){
			lazy[2*tnode]+=del;
			lazy[2*tnode+1]+=del;
		}
		return ;
	}
	int mid=s+(e-s)/2;
	update(lazy,tree,2*tnode,s,mid,l,r,del);
	update(lazy,tree,2*tnode+1,mid+1,e,l,r,del);
	tree[tnode]=tree[2*tnode]+tree[2*tnode+1];
}

int query(int *tree,int *lazy,int tnode,int s,int e,int l,int r){
	if(s>r||e<l)
		return 0;
	if(lazy[tnode]!=0){
		tree[tnode]+=(e-s+1)*lazy[tnode];
		if(s!=e){
			lazy[2*tnode]+=lazy[tnode];
			lazy[2*tnode+1]+=lazy[tnode];
		}
		lazy[tnode]=0;
	}
	if(s>=l&&e<=r)
		return tree[tnode];
	int mid=s+(e-s)/2;
	int a1=query(tree,lazy,2*tnode,s,mid,l,r);
	int a2=query(tree,lazy,2*tnode+1,mid+1,e,l,r);
	return a1+a2;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,c;
		cin>>n>>c;
		int *tree=new int[4*n];
		int *lazy=new int[4*n];
		for(int i=1;i<4*n;i++){
			lazy[i]=0;
			tree[i]=0;
		}
		while(c--){
		int type;
			cin>>type;
			int l,r;
			cin>>l>>r;
			if(type==0){
				ll v;
				cin>>v;
				update(lazy,tree,1,0,n-1,l-1,r-1,v);

			}
			else
				cout<<query(tree,lazy,1,0,n-1,l-1,r-1)<<endl;
		}
		
	}
	return 0;
}