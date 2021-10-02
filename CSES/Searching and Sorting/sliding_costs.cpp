#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k;
	cin>>n>>k;
	ll arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	multiset<ll> a;
	multiset<ll,greater<ll>()> b;
	for (int j = 0,i=0; j < n; ++j)
	{
		
		if(a.size()>b.size()){
			a.push(arr[j]);
			auto c=*(a.begin());
			a.erase(a.begin());
			b.insert(c);
		}
		else{

		}
		if(j-i+1==k){

			i++;
		}
	}

}