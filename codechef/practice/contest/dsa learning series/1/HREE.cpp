
// int main()
// {
// 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// 	ll t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		ll k;
// 		cin>>k;
// 		ll d0,d1;
// 		cin>>d0>>d1;
// 		ll yuww = 0; 
// 		yuww = d0 + d1; 
// 	    ll kl = (d0 + d1) % 10; 
// 	    if(k>=3){

// 		    yuww += kl; 
// 		    ll opo = (k - 3) / 4; 
// 		    ll uit = (k - 3) % 4; 
// 		    yuww += (opo * 20); 
// 		    for (ll i = 1; i <= uit; i++) { 
// 		        kl = (2 * kl) % 10; 
// 		        yuww += kl; 
// 		    }
// 	    }
// 		if(yuww%3==0)
// 			cout<<"Yes";
// 		else
// 			cout<<"No";
// 		cout<<endl;

// 	}
// 	return 0;
// }
//  
#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;


int main() 
{ 
	ll t;cin>>t;
	while(t--){
	    ll n,d0,d1;
	    cin>>n>>d0>>d1;
	    ll op,q,r,s;
	    ll yuww=d0+d1;
	    ll ioio;
	    op=n/4,q=(n-1);
	    q/=4;
	    r=(n-2),s=(n-3);
	    r/=4;
	    s/=4;
	    ioio=op*((2*yuww)%10);
	    ll yu=0,us;
	    us++;
	    ioio+=+q*((4*yuww)%10);
	    ioio+=r*((8*yuww)%10)+s*((6*yuww)%10)+yuww+(yuww%10);
	    if(ioio%3==0)std::cout << "YES" << std::endl;
	    else cout<<"NO"<<endl;
	}
	return 0; 
} 
