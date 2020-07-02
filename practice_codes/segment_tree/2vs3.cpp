#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
void build(int arr[],int *tree,int tnode,int s,int e,int md[]){
	if(s==e){
		tree[tnode]=arr[s];
		return ;
	}
	int mid=s+(e-s)/2;
	build(arr,tree,2*tnode,s,mid,md);
	build(arr,tree,2*tnode+1,mid+1,e,md);
	tree[tnode]=(tree[2*tnode+1]+((tree[2*tnode])*md[e-mid]))%3;
}

void update(int arr[],int *tree,int tnode,int s,int e,int idx,int md[]){
	if(s==e){
		tree[tnode]=1;
		return;
	}
	int mid=s+(e-s)/2;
	if(mid>=idx)
		update(arr,tree,2*tnode,s,mid,idx,md);
	else
		update(arr,tree,2*tnode+1,mid+1,e,idx,md);
	tree[tnode]=(tree[2*tnode+1]+((tree[2*tnode])*md[e-mid]))%3;
}

int query(int arr[],int *tree,int tnode,int s,int e,int l,int r,int md[]){
	if(s>r||e<l)
		return 0;
	if(s>=l&&e<=r)
		return (tree[tnode]*md[r-e])%3;
	int mid=s+(e-s)/2;
	int a=query(arr,tree,2*tnode,s,mid,l,r,md);
	int b=query(arr,tree,2*tnode+1,mid+1,e,l,r,md);
	return (a+b)%3;

}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		int n;
		cin>>n;
		int modulo[n];
		modulo[0]=1;
		for(int i=1;i<n;i++){
			modulo[i]=(modulo[i-1]*2)%3;		
		}
		string s;
		cin>>s;
		int arr[n];
		for(int i=0;i<n;i++)
			arr[i]=s[i]-'0';
		int q;
		cin>>q;
		int *tree=new int[4*n];
		build(arr,tree,1,0,n-1,modulo);
		while(q--){
			int t;
			cin>>t;
			if(t==0){
				int l,r;
				cin>>l>>r;
				cout<<query(arr,tree,1,0,n-1,l,r,modulo)%3<<endl;
			}
			else{
				int x;
				cin>>x;
				update(arr,tree,1,0,n-1,x,modulo);
			}
		}	
	return 0;
}