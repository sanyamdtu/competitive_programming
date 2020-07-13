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
		int n,q;
		cin>>n>>q;
		int arr[n-1]
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		while(q--){
			int s,k;
			cin>>s>>k;
			int visited[n+1],int c=0,curr=s;
			memset(visited,0,sizeof(visited));
			while(c!=k){
				int i=curr;
				if(curr==1&&visited[curr]!=1){
					arr[0]=0;
					curr++;
					c++;
				}
				else if(curr==n&&visited[curr]!=1){
					arr[n]=0;
					curr--;
					c++;
				}
				else{
					int r=arr[curr],l=arr[curr-1];
					if(r!=0&&l!=0){
						if(r>l){
							curr--;
							c++;
						}
						else
						{
							curr++;
							c++;
						}
					}
					else{
						if(l==0)
							curr++;
						else
							curr+;
					}
				}
				visited[curr]=1;
			}
		}
	}
	return 0;
}