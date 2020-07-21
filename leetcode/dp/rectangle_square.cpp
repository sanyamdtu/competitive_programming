#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int n,int m,vector<int> v){
	int f=0;
	for (int i = 0; i < n; ++i)
	{
		f+=v[i];
	}
	if(f==n*m)
		return 0;
	int ans=1000000;
	for (int i = 0; i <n; ++i)
	{
		for (int j = 1; j <=min(n,m) ; ++j)
	    {
	    	bool flag=true;
	    	if(i+j>n)
	    		flag=false;
			for (int l = i; l<i+j ; ++l)
			{
				if(v[l]+j>m)
					flag=false;
			}
			if(flag){
				for (int l = i;l<i+j ; ++l)
				{
					v[l]+=j;
				}
				ans=min(func(n,m,v)+1,ans);
				for (int l = i; l<n&&l <i+j ; ++l)
				{
					v[l]-=j;
				}
			}
	    }
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		v[i]=0;
	}
	cout<<func(n,m,v);
	return 0;
}