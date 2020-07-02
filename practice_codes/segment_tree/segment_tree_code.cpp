#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int buildTree(int arr[],int s,int e,int treenode,int *tree){
	if(s==e){
		tree[treenode]=arr[s];
		return tree[treenode];
	}
	int mid=s+(e-s)/2;
    int a1=buildTree(arr,s,mid,2*treenode,tree);
    int a2=buildTree(arr,mid+1,e,2*treenode+1,tree);

    tree[treenode]=a1+a2;
    return tree[treenode];
}

void updatetree(int arr[],int s,int e,int treenode,int *tree,int ele,int idx){
	if(s==e){
		arr[idx]=ele;
		tree[treenode]=ele;
		return ;
	}
	int mid=s+(e-s)/2;
	if(mid>=idx)
		updatetree(arr,s,mid,2*treenode,tree,ele,idx);
	else
		updatetree(arr,mid+1,e,2*treenode+1,tree,ele,idx);
	tree[treenode]=tree[2*treenode] + tree[2*treenode+1];
}

int query(int *tree,int tnode,int l,int r,int s,int e){
	if(e<l||s>r)
		return 0;
	if(s>=l&&e<=r)
		return tree[tnode];
	
		int mid=s+(e-s)/2;
		int a1=query(tree,2*tnode,l,r,s,mid);
		int a2=query(tree,2*tnode+1,l , r,mid+1,e);
		return a1+a2;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
		int n=5;
		int arr[n]={1,2,3,4,5};
		int *tree=new int[4*n];
		int b=buildTree(arr,0,n-1,1,tree);
		updatetree(arr,0,n-1,1,tree,10,2);
		cout<<query(tree,1,2 ,4,0,n-1);
	return 0;
}