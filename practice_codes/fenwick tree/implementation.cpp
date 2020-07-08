#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

void update(int bit[],int i,int n,int val){
	for(;i<=n;i+=(i&(-i)))
		bit[i]+=val;
}

int query(int bit[],int i){
	int sum=0;
	for( ;i>0;i-=(i&(-i)))
		sum+=bit[i];
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int arr[n+1];
	int b[n+1];
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		update(b,i,n,arr[i]);
	}
	for(int i=1;i<=n;i++)
		cout<<b[i]<<" ";
	cout<<query(b,5);
	return 0;
}