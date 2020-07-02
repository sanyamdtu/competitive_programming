#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;


void update(int *arr,int *tree,int tnode,int s,int e,int idx,int ele){
	if(s==e){
		arr[idx]=ele;
		tree[tnode]=ele;
		return ;
	}
	int mid=s+(e-s)/2;
	if(mid>=idx){

		update(arr,tree,2*tnode,s,mid,idx,ele);
	}
	else{
		
		update(arr,tree,2*tnode+1,mid+1,e,idx,ele);
	}
	tree[tnode]=min(tree[2*tnode],tree[2*tnode+1]);
}

int query(int *tree,int tnode,int s,int e,int l,int r){
	if(s>r||e<l)
		return INT_MAX;
	if(s>=l&&e<=r)
		return tree[tnode];
	int mid=s+(e-s)/2;
	int a1=query(tree,2*tnode,s,mid,l,r);
	int a2=query(tree,2*tnode+1,mid+1,e,l,r);
	return min(a1,a2);
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
		int arr[n];
		memset(arr,0,sizeof(arr));
		int *tree=new int[4*n];
		memset(tree,0,sizeof(tree));
		while(c--){
			int type;
			cin>>type;
			if(type==0){
				int l,r;
				ll v;
				cin>>l>>r>>v;

			}
			else{
				int p,q;
				cin>>p>>q;

			}
		}
		
	}
	return 0;
}