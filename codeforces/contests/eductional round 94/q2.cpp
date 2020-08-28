#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		ll p,f;
		cin>>p>>f;
		if(p<f)
			swap(p,f);
		ll a,b;
		cin>>a>>b;
		ll s,w,ans=0;
		cin>>s>>w;
		if(s<w){
			while(p>=s&&a>0){
				if((p/s)==(p/w)&&b>=(p/s)&&f>=(p/s)*s){
					break;
				}
				ans++;
				p-=s;
				a--;
			}
			while(f>=s&&a>0){
				ans++;
				f-=s;
				a--;
			}
			while(p>=w&&b>0){
				ans++;
				p-=w;
				b--;
			}
			while(f>=w&&b>0){
				ans++;
				f-=w;
				b--;
			}			
		}
		else{
			while(p>=w&&b>0){
				if((p/w)==(p/s)&&a>=(p/w)&&f>=(p/w)*w){
					break;
				}
				ans++;
				p-=w;
				b--;
			}
			while(f>=w&&b>0){
				ans++;
				f-=w;
				b--;
			}
			while(p>=s&&a>0){
				ans++;
				p-=s;
				a--;
			}
			while(f>=s&&a>0){
				ans++;
				f-=s;
				a--;
			}
		}
		
		cout<<ans<<endl;
	}
	return 0;
}