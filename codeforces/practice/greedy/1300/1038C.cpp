#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int a[n],b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	bool flag=true;//as chance
	long long as=0,bs=0,ai=n-1,bi=n-1;
	while(ai>=0||bi>=0){
		if(flag){	
			if(ai!=-1&&bi!=-1){
				if(a[ai]>b[bi]){
					as+=a[ai];
					ai--;
				}
				else
					bi--;
			}else if(ai==-1){
				bi--;
			}
			else{
				as+=a[ai];
				ai--;
			}
		}
		else{
			if(bi!=-1&&ai!=-1){
				if(b[bi]>a[ai]){
					bs+=b[bi];
					bi--;
				}
				else
					ai--;
			}else if(bi==-1){
				ai--;
			}
			else{
				bs+=b[bi];
				bi--;
			}
		}
		flag=!flag;
	}
	// cout<<as<<bs;
	 cout<<(as-bs);
	return 0;
}