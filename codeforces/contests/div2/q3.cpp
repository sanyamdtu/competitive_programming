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
		ll n;
		cin>>n;
		int flag=1;//ashish jeetega
		if(n==1)
			flag=0;
		else if(n==2)
			flag=1;
		else if(n%2==0){
			int i=0;
			ll num=n;
			while(num%2==0){
				i++;
				num=num/2;
			}
			if(num==1)
			  flag=0;
			else{
				int power=0;
				for (int i = 3; i <= sqrt(n)+1; i = i + 2)  {  
                 while (num % i == 0)  
                  {  
                  	power++;
                    num = num/i;  
                  }   
                }  
                // cout<<power<<" "<<num;
                if(power==1&&i==1)
                	flag=0;
			}
		}
		if(flag)
			cout<<"Ashishgup"<<endl;
		else
			cout<<"FastestFinger"<<endl;
	}
	return 0;
}