#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll func(ll x ,ll y){
	bitset<30> maxi(x);
	bitset<30> mini(y);
	
		bool flag=false,flag1=false;;
		string ma,mi;
		ma=mi="";
		for (int i = maxi.size()-1; i>=0 ; --i)
		{
			if(maxi[i]==1){
					flag=true;
			}
			if(flag){
				if(maxi[i]==1)
					ma+='1';
				else
					ma+='0';
			}
			if(mini[i]==1){
					flag1=true;
			}
			if(flag1){
				if(mini[i]==1)
					mi+='1';
				else
					mi+='0';
			}
		}
		string a,b;
		b=mi+ma;
		a=ma+mi;
		ll a1=0,b1=0;
		for (int i = 0; i < a.size(); ++i)
		{
			a1=a1*2;
			b1=b1*2;
			if(a[i]=='1')
				a1+=1;
			if(b[i]=='1')
				b1+=1;
		}
		return b1-a1;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		ll arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];

		}
		int maxele=0,max1=0,minele=0,min0=0;
		for (int i = 0; i < n; ++i)
		{
			bitset<30> a(arr[i]);
			bool flag=false;
			int curr1=0,curr0=0;
			for (int i = 29; i >=0 ; --i)
			{
				if(maxi[i]==1){
					flag=true;
					curr1++;
				}
				if(flag){
					if(maxi[i]==1)
						curr1++;
					else
						break;
			}

		}
		cout<<maxi<<endl;
	}
	return 0;
}