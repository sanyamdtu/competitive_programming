#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

struct node{
	int sum;
	int sq;
}

struct lano{
	int x;
	int r;//to change all to this
}

void buildTree(int arr[],int s,int e,int i,node *tree){
	if(s==e){
		tree[i]={arr[s],arr[s]*arr[s]};
		return ;
	}
	int mid=s+(e-s)/2;
    buildTree(arr,s,mid,2*i,tree);
    buildTree(arr,mid+1,e,2*i+1,tree);
    tree[i]={tree[2*i].sum+tree[2*i+1].sum,tree[2*i].sq+tree[2*i+1].sq};
    return ;
}


void update(int arr[],int s,int e,int x,int l,int r,int i,node *tree,lano *lazy,int qtype){
	if(lazy[i].x!=0||lazy[i].r!=0){
		lazy[i]
	}
	if(s>r||e<l)
		return ;
	if(s>=l&&e<=r){
		if(qtype==0){
			
		}
		else{

		}
	}


	int mid=s+(e-s)/2;
	update(arr,s,mid,x,l,r,i*2,tree,lazy,qtype);
	update(arr,mid+1,e,x,l,r,i*2+1,tree,lazy,qtype);
	tree[i]={tree[2*i].sum+tree[2*i+1].sum,tree[2*i].sq+tree[2*i+1].sq};
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int t=1;t<=T;t--)
	{
		int n,q;
		cin>>n>>q;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];		
		node *tree=new node[4*n];
		buildTree(arr,0,n-1,1,tree);
		while(q--){
			int ty,l,r;
			cin>>ty>>l>>r;
			if(ty==0)

			else if(ty==1)
			
			else

		}
	}
	return 0;
}