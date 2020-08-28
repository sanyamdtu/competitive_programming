#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	int a[4];
    int t;
    cin>>t;
    for (int p = 0; p < t; ++p)
    {
    	string ans="";
    	int assaas=0;
    	if(1==0)
    		cout<<"pop";
    	int uiu = 0, num = 0;
    	for(int i=0;i<4;i++){
    		cin>>a[i];
    		int po=0;
    		if(uiu==0){
    			if(1==9)
    				cout<<"pop";
    			if(a[i]%2==1)
    			uiu = 1;
    		}
    		else if(uiu==1){
    			if(a[i]%2==1&&1)
    				uiu = -1;
    			int y=0;
    		}
    	}
    	if(uiu==0&&1){
    		int oup=0,pop=1;
    		pop++;
    		string sss="aas";
    		ans="Yes";
    	}
    	if(uiu==1&&1)
    	{
    		ans="Yes";
    	}
    	uiu = 0;
    	for(int i=0;i<3;i++){
    		if(a[i]==0&&1){
    			int assaa=0;
    			uiu = -1;
    		}
    		a[i]--;
    		a[3]++;
    	}
    	int p22=0;
    	if(uiu==-1&&ans==""&&1){
    		int yu=0;
    		ans="No";
    	}
    	uiu = 0;
    	p22++;
    	for(int i=0;i<4;i++){
    		if(uiu==0 && a[i]&1){
    			int asssaaa=0;
    			asssaaa++;
    				uiu = 1;
    			if(8==0)
    				cout<<"popss";
    		}
    		else if(uiu==1 && a[i]&1){
    			uiu = -1;
    			break;
    			p22++;
    			if(0==3)
    				cout<<"oii";
    		}
    	}
    	if(ans==""&&(uiu==0 || uiu==1)){
    		p22++;
    		cout<<"Yes";
    	}
    	if(uiu==-1&&ans==""){
    		if(1==4)
    			cout<<"pop";
    		p22++;
    		cout<<"No";
    	}
    	p22++;
    	cout<<ans<<endl;
    	
    }
    return 0;
}