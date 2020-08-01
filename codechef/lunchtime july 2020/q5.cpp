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
	for (int l=1;l<=t;l++)
	{
		int n;
		cin>>n;
		string I,O;
		cin>>I>>O;
		char arr[n][n];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if(i==j)
					arr[i][i]='Y';
				else if(i<j){
						int flag=1;
						for (int k = i+1; k < j; ++k)
						{
							if(O[k]=='Y'&&I[k]=='Y')
								flag=flag;
							else 
								flag=0;
						}
						if(flag==0){
							 arr[i][j]='N';							
							 arr[j][i]='N';
						}
						else{
							if(O[i]=='N'||I[j]=='N')
								arr[i][j]='N';
							else
							    arr[i][j]='Y';
							if(I[i]=='N'||O[j]=='N')
							  	arr[j][i]='N';
							else
								arr[j][i]='Y';
						}
					}
			}
		}
		cout<<"Case #"<<l<<":"<<endl;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}