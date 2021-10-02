#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,mq;
	cin>>n>>mq;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	unordered_map<int,int> m;
	for (int i = 0; i < n; ++i)
	{
		m[arr[i]]=i;
	}
	int ans=1,c=-1;
	for (int i =1; i <=n; ++i)
	{
		if(c>m[i]){
			c=m[i];
		}
		else{
			c=m[i];
			ans++;
		}
	}
	while(mq--) {
		int x,y; cin>>x>>y;
		int r = arr[x], s = arr[y];
		swap(arr[x], arr[y]);
		if (m[r-1] <= m[r] && m[r-1] > y) ans++;
		if (m[r-1] > m[r] && m[r-1] <= y) ans--;
		if (m[r] <= m[r+1] && y > m[r+1]) ans++;
		if (m[r] > m[r+1] && y <= m[r+1]) ans--;		
		m[r] = y;
		if (m[s-1] <= m[s] && m[s-1] > x) ans++;
		if (m[s-1] > m[s] && m[s-1] <= x) ans--;
		if (m[s] <= m[s+1] && x > m[s+1]) ans++;
		if (m[s] > m[s+1] && x <= m[s+1]) ans--;	
		m[s] = x;
		cout<<ans<<endl;
    }
}