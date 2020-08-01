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
		int n;
		cin>>n;
		string a,b;
		cin>>a>>b;
		int arr[20][20];
		memset(arr,0,sizeof(arr));
		bool flag=true;
		for (int i = 0; i <n ; ++i)
		{
			if(a[i]>b[i])
				flag=false;
			arr[a[i]-'a'][b[i]-'a']=1;
		}
		if(flag){
			int count=0;
			for (int i = 0; i < 20; ++i)
			{
				int mini=30;
				for (int j = i+1; j < 20; ++j)
				{
					if(arr[i][j]){
						mini=j;
						count++;
						break;
						
					}
				}
				if(mini!=30){
					for (int j = i+1; j < 20; ++j)
					{
						if(arr[i][j]){
							arr[mini][j]=1;
						}
					}
				}
			}
			cout<<count;
		}
		else
			cout<<-1;
		cout<<endl;
	}
	return 0;
}