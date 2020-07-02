#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
#define maxi 1000
typedef  long long ll;
int sieve[maxi+1];
int euler_tio[maxi+1];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for(int i=0;i<=maxi;i++)
		sieve[i]=1;
	for(int i=0;i<=maxi;i++)
		euler_tio[i]=i;
	for(int i=2;i<=maxi;i++){
		if(sieve[i]==1){
		   for (ll j = i*i; j <=maxi; j+=i)
		  {
			  sieve[j]=0;
			  int a=euler_tio[j]/i;
			  euler_tio[j]=euler_tio[j]-a;
		  }
		  euler_tio[i]--;
	    }
	}
		int n;
		cin>>n;
		for(int i=2;i<=n;i++){
			cout<<euler_tio[i]<<" ";
		}
	return 0;
}