#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int a[n+1],b[n+1];
		a[0]=b[0]=0;
		for (int i = 1; i <= n; ++i)
		{
			char ch;
			cin>>ch;
			if(ch=='+'){
				b[i]=a[i]=1;
			}
			else{
				a[i]=b[i]=-1;
			}
		}
		for (int i = 1; i <=n; ++i)
		{
			if(i%2==1){
				a[i]=a[i-1]+a[i];
				b[i]=b[i-1]-b[i];
			}
			else{
				a[i]=a[i-1]-a[i];
				b[i]=b[i-1]+b[i];
			}
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			
			if((r-l+1)%2==0){
				int c=0;
				if(l%2==1){
					c=a[r]-a[l-1];
				}
				else{
					c=b[r]-b[l-1];
				}
				if(c==0)
					cout<<0;
				else
					cout<<2<<endl;
			}
			else{
				cout<<1<<endl<<;
			}
			cout<<endl;
		}
	}
	
}
