#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

struct warr{
	ll a,b,i;
};

void build(warr arr[],warr *tree,int s,int e,int tnode){
	if(s==e){
		tree[tnode]=arr[s];
		return ;
	}
	int mid=s+(e-s)/2;
	build(arr,tree,s,mid,2*tnode);
	build(arr,tree,mid+1,e,2*tnode+1);
	warr x=tree[2*tnode],y=tree[2*tnode+1];
	warr temp;
	if(x.a>y.a)
		temp=x;
	else if(x.a<y.a)
		temp=y;
	else{
		if(x.b<y.b)
			temp=x;
		else if(x.b>y.b)
		    temp=y;
		else
			(x.i<y.i)?temp=x:temp=y;
	}
	tree[tnode]=temp;
}


warr querry(warr arr[],warr *tree,int s,int e,int tnode,int l,int r){
	if(s>r||e<l){
		return {INT_MIN,INT_MIN,INT_MIN};
	}
	else if(s>=l&&e<=r)
		return tree[tnode];
	int mid=s+(e-s)/2;
	warr x=querry(arr,tree,s,mid,2*tnode,l,r);
	warr y=querry(arr,tree,mid+1,e,2*tnode+1,l,r);
	warr temp;
	if(x.a>y.a)
		temp=x;
	else if(x.a<y.a)
		temp=y;
	else{
		if(x.b<y.b)
			temp=x;
		else if(x.b>y.b)
		    temp=y;
		else
			(x.i<y.i)?temp=x:temp=y;
	}
	return temp;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
		int n;
		cin>>n;
		warr arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].a;
			arr[i].i=i;
		}
		for(int i=0;i<n;i++)
			cin>>arr[i].b;
		int q;
		cin>>q;
		warr *tree=new warr[4*n];
		build(arr,tree,0,n-1,1);
		// for(int i=1;i<10;i++)
		// 	cout<<tree[i].i<<" ";
		// cout<<endl;
		while(q--){
			int l,r;
			cin>>l>>r;
			cout<<querry(arr,tree,0,n-1,1,l-1,r-1).i+1<<endl;
		}
	return 0;
}