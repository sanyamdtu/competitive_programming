#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
		int n,m;
		cin>>n>>m;
		if(n<=1&&m<=1){
			cout<<0;
		}
		else{
			int count=0;
		    while(n>0&&m>0){
			  if(n>m){
			  	n-=2;
			  	count++;
			  	m--;
			   }	
			   else if(m>=2){
			   	// cout<<"ok";
			   	m-=2;
			   	n--;
			   	count++;
               }
               else{
               	break;
               }
			}
			cout<<count;
		}

	return 0;
}