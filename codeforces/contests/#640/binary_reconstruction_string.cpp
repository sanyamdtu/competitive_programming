#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int l=T;l>0;l--)
	{
		int n0,n1,n2;
		cin>>n0>>n1>>n2;
		if(n1==0){
            if(n0==0)
            for(int i=0;i<=n2;i++)
             cout<<1;
            else
             for(int i=0;i<=n0;i++)
              cout<<0;
        }
        else{
            for(int i=-1;i<n2;i++)
             cout<<1;
            for(int i=1;i<=n0+1;i++)
            cout<<0;
            for(int i=3;i<n1+2;i++)
             cout<<i%2;
        }
        cout<<endl;
	}
}