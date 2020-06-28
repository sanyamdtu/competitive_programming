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
		n*=2;
		int arr[n];
		for(int i=0;i<n;i++)
			 cin>>arr[i];
		
		vector<int> even,odd;
		for(int i=0;i<n;i++){
			if(arr[i]%2==0)
				even.push_back(i);
			else
				odd.push_back(i);
		}
		int e=even.size(),o=odd.size();
		if(e%2==0&&o%2==0){
			if(e!=0){
				even.pop_back();
				even.pop_back();
			}
			else{
				odd.pop_back();
				odd.pop_back();
			}
		}
		else{
			even.pop_back();
			odd.pop_back();
		}
	    for(int i=0;i<even.size();i+=2){
		  cout<<even[i]+1<<" "<<even[i+1]+1<<endl;
	    }
	    
	    for(int i=0;i<odd.size();i+=2){
		  cout<<odd[i]+1<<" "<<odd[i+1]+1<<endl;
	    }
	    // cout<<endl;
	}
	return 0;
}