#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

void build (ll arr[],int tree[][2],int tnode,int s,int e){
	if(s==e){
		tree[tnode][0]=(arr[s]%2==0)?1:0;
		tree[tnode][1]=(arr[s]%2==1)?1:0;
		return ;
	}
	int mid=s+(e-s)/2;
	build(arr,tree,2*tnode,s,mid);
	build(arr,tree,2*tnode+1,mid+1,e);
	tree[tnode][0]=tree[2*tnode][0]+tree[2*tnode+1][0];
	tree[tnode][1]=tree[2*tnode][1]+tree[2*tnode+1][1];
	return;
}
void update(ll arr[],int tree[][2],int tnode,int s,int e,int idx,ll ele){
	if(s==e){
		arr[idx]=ele;
		tree[tnode][0]=(ele%2==0)?1:0;
		tree[tnode][1]=(ele%2==1)?1:0;
		return ;
	}
	int mid=s+(e-s)/2;
	if(mid>=idx)
		update(arr,tree,2*tnode,s,mid,idx,ele);
	else
		update(arr,tree,2*tnode+1,mid+1,e,idx,ele);
	tree[tnode][0]=tree[2*tnode][0]+tree[2*tnode+1][0];
	tree[tnode][1]=tree[2*tnode][1]+tree[2*tnode+1][1];
}

int querye(ll arr[],int tree[][2],int tnode,int s,int e,int l,int r){
	if(s>r||e<l)
		return 0;
	if(s>=l&&e<=r)
		return tree[tnode][0];

	int mid=s+(e-s)/2;
	int a1=querye(arr,tree,2*tnode,s,mid,l,r);
	int a2=querye(arr,tree,2*tnode+1,mid+1,e,l,r);
	return a1+a2;
}
int queryo(ll arr[],int tree[][2],int tnode,int s,int e,int l,int r){
	if(s>r||e<l)
		return 0;
	if(s>=l&&e<=r)
		return tree[tnode][1];
	int mid=s+(e-s)/2;
	int a1=queryo(arr,tree,2*tnode,s,mid,l,r);
	int a2=queryo(arr,tree,2*tnode+1,mid+1,e,l,r);
	return a1+a2;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,q;
	cin>>n;
	ll *arr=new ll[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int tree[4*n][2];
	build(arr,tree,1,0,n-1);
	cin>>q;
	while(q--){
		int type;
		cin>>type;
		int x;
		cin>>x;
		if(type==0){
			ll y;
			cin>>y;
			x--;
			// cout<<x<<" "<<y<<endl;
			update(arr,tree,1,0,n-1,x,y);
			// for(int i=1;i<14;i++)
		 //      cout<<tree[i][0]<<" ";
	  //       cout<<endl;
		}
		else if(type==1){
		    int y;
			cin>>y;
			x--;
			y--;
			 cout<<querye(arr,tree,1,0,n-1,x,y)<<endl;
		}
		else{
				int y;
				cin>>y;
				x--;
			    y--;
			    cout<<queryo(arr,tree,1,0,n-1,x,y)<<endl;
		}
	}
	return 0;
}