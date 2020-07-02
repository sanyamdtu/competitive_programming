	#include<bits/stdc++.h>
	using namespace std;
	#define pb  push_back
	#define mod 1000000007
	#define INF 1e18
	typedef  long long ll;
	struct sum
	{
		ll a,b;
	};

	void build(ll arr[],sum *tree,int tnode,int s,int e){
		if(s==e){
			sum a;
			a={INT_MIN,arr[s]};
			tree[tnode]=a;
			return ;
		}
		int mid=s+(e-s)/2;
		 build(arr,tree,2*tnode,s,mid);
		build(arr,tree,2*tnode+1,mid+1,e);
		sum x=tree[2*tnode];
		sum y=tree[2*tnode+1];
		sum temp;
		ll absii[4]={x.a,x.b,y.a,y.b};
		sort(absii,absii+4);
		temp={absii[3],absii[2]};
		tree[tnode]=temp;
	}

	void update(ll arr[],sum *tree,int tnode,int s,int e,int idx,ll ele){
		if(s==e){
			arr[idx]=ele;
			tree[tnode]={INT_MIN,ele};
			return ;
		}
		int mid=s+(e-s)/2;
		if(mid>=idx)
			update(arr,tree,2*tnode,s,mid,idx,ele);
		else
			update(arr,tree,2*tnode+1,mid+1,e,idx,ele);
		sum x=tree[2*tnode];
		sum y=tree[2*tnode+1];
		sum temp;
		ll absii[4]={x.a,x.b,y.a,y.b};
		sort(absii,absii+4);
		temp={absii[3],absii[2]};
		tree[tnode]=temp;
    }


	sum query(ll arr[],sum *tree,int s,int e,int l,int r,int tnode){
		if(s>r||e<l){
			sum temp;
			return temp={INT_MIN,INT_MIN};
		}
		if(s>=l&&e<=r)
			return tree[tnode];

		int mid=s+(e-s)/2;
		sum x=query(arr,tree,s,mid,l,r,2*tnode);
		sum y=query(arr,tree,mid+1,e,l,r,2*tnode+1);
		sum temp;
		ll absii[4]={x.a,x.b,y.a,y.b};
		sort(absii,absii+4);
		temp={absii[3],absii[2]};
		return temp;
	}

	int main()
	{
		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
			int n;
			cin>>n;
			ll arr[n];
			for(int i=0;i<n;i++)
				 cin>>arr[i];
			sum *tree=new sum[4*n];
			build(arr,tree,1,0,n-1);
			// for(int i=1;i<10;i++)
			// 	cout<<tree[i].a<<" "<<tree[i].b<<endl;
			// cout<<endl;
			int q;
			cin>>q;
			while(q--){
				char t;
				cin>>t;
				int x;
				cin>>x;
				x--;
				if(t=='Q'){
					int y;
					cin>>y;
					y--;
					sum a;
					a=query(arr,tree,0,n-1,x,y,1);
					cout<<a.a+a.b<<endl;
				}
				else{
					ll y;
					cin>>y;
					update(arr,tree,1,0,n-1,x,y);
				}
			}	
		return 0;
	}