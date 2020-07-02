#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

struct node{
	int bps,bss,max_sum,sum;
};

void build(int arr[],node *tree,int s,int e,int tnode=1){
	if(s==e){
		int a=arr[s];
		tree[tnode]={a,a,a,a};
		return ;
	}
	int mid=s+(e-s)/2;
	build(arr,tree,s,mid,2*tnode);
	build(arr,tree,mid+1,e,2*tnode+1);
	node temp;
	node x=tree[2*tnode];
	node y=tree[2*tnode+1];
	int bps=max(x.bps,x.sum+y.bps);
	int bss=max(y.bss,y.sum+x.bss);
	int sum=x.sum+y.sum;
	int max_sum=max(x.bss+y.bps,max(x.max_sum,max(bps,max(bss,y.max_sum))));
	temp={bps,bss,max_sum,sum};
	tree[tnode]=temp;
}


node query(int arr[],node *tree,int s,int e,int tnode,int l,int r){
	if(s>r||e<l)
		return {INT_MIN,INT_MIN,INT_MIN,INT_MIN};
	if(s>=l&&e<=r)
		return tree[tnode];
	int mid=s+(e-s)/2;
	node temp;
	node x=query(arr,tree,s,mid,2*tnode,l,r);
	node y=query(arr,tree,mid+1,e,2*tnode+1,l,r);
	int bps=max(x.bps,x.sum+y.bps);
	int bss=max(y.bss,y.sum+x.bss);
	int sum=x.sum+y.sum;
	int max_sum=max(x.bss+y.bps,max(x.max_sum,max(bps,max(bss,y.max_sum))));
	temp={bps,bss,max_sum,sum};
	return temp;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int q;
	cin>>q;
	node *tree=new node[4*n];
	memset(tree,0,sizeof(tree));
	for(int i=1;i<10;i++)
		cout<<tree[i].sum<<" ";
	cout<<endl;
	while(q--){
		int l,r;
		cin>>l,r;
		l--;
		r--;
		cout<<query(arr,tree,0,n-1,1,l,r).max_sum;
	}
	return 0;
}