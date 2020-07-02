#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int build(int *arr,int *tree,int tnode,int s,int e){
	if(s==e){
		tree[tnode]=arr[s];
		return arr[s];
	}
	int mid=s+(e-s)/2;
	int a1=build(arr,tree,2*tnode,s,mid);
	int a2=build(arr,tree,2*tnode+1,mid+1,e);
	tree[tnode]=min(a1,a2);
	return min(a1,a2);
}

void update(int *arr,int *tree,int tnode,int s,int e,int idx,int ele){
	if(s==e){
		arr[idx]=ele;
		tree[tnode]=ele;
		return ;
	}
	int mid=s+(e-s)/2;
	if(mid>=idx)
		update(arr,tree,2*tnode,s,mid,idx,ele);
	else
		update(arr,tree,2*tnode+1,mid+1,e,idx,ele);
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
	
		int n,q;
		cin>>n>>q;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
			 cin>>arr[i];
		int *tree=new int[4*n];
		build(arr,tree,1,0,n-1);
		// for(int i=1;i<2*n+1;i++)
		// 	cout<<tree[i]<<" ";
		// cout<<endl;
		while(q--){
			char type;
			cin>>type;
			if(type=='q'){
				int l,r;
				cin>>l>>r;
				l--;
				r--;
				cout<<query(tree,1,0,n-1,l,r)<<endl;
			}
			else {
				int x,y;
			    cin>>x>>y;
			    x--;
			    update(arr,tree,1,0,n-1,x,y);
			}
		}		
	return 0;
}