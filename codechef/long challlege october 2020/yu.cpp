#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int ck=0;
int setBitNumber(int n) 
{ 
  
    // To find the position 
    // of the most significant 
    // set bit 
    int k = (int)(log2(n)); 
  
    // To return the the value 
    // of the number with set 
    // bit at k-th position 
    return (int)(pow(2, k)); 
} 
int func(ll arr[],int n,int vis[],int c){
	ck++;
	if(c==2){
		ll x=0,y;
		for (int i = 0; i < n; ++i)
		{
			if(vis[i]==0)
			{
				if(x==0)
				{
					x=arr[i];
				}
				else
				{
					return setBitNumber(x^arr[i]);
				}
			}
		}
	}
	int ans=INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{ 
			if(vis[i]==0&&vis[j]==0){
				ll d=arr[i]^arr[j];
				ll x=setBitNumber(d);
				swap(arr[i],x);
				vis[j]=1;
				ans=min(ans,func(arr,n,vis,c-1));
				swap(arr[i],x);
				vis[j]=0;
			}
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	ll arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int vis[n];
	memset(vis,0,sizeof(vis));
	cout<<func(arr,n,vis,n)<<endl;
	cout<<ck;
	return 0;
}