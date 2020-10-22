#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int V;
ll arr[1000000][6];
ll d;
int c=0;
int func(int u,int v){
	ll sum=0;
	for (int i = 0; i < d; ++i)
	{
		sum-=abs(arr[u][i]-arr[v][i]);
	}
	return sum;
}
ll minKey(ll key[], bool mstSet[]) 
{ 
	ll min = INT_MAX, min_index; 
	for (ll v = 0; v < V; v++) {
		c++; 
		if (mstSet[v] == false && key[v] < min) 
			min = key[v], min_index = v; 

	}
	return min_index; 
} 

void prllMST(ll parent[]) 
{ 
	ll sum=0;
	for (ll i = 1; i < V; i++) 
		sum-=func(i,parent[i]); 
	cout<<sum;
} 
void primMST() 
{ 
	ll parent[V]; 
	ll key[V]; 
	bool mstSet[V]; 
	for (ll i = 0; i < V; i++) 
		key[i] = INT_MAX, mstSet[i] = false; 
	key[0] = 0; 
	parent[0] = -1;
	for (ll count = 0; count < V - 1; count++)
	{ 
		ll u = minKey(key, mstSet); 
		mstSet[u] = true; 
		for (ll v = 0; v < V; v++) {
			if (u!=v && mstSet[v] == false && func(u,v) < key[v]) 
				parent[v] = u, key[v] = func(u,v); 
		}
	} 
	prllMST(parent); 
} 

int main() 
{ 
	
	cin>>V>>d;
	for (ll i = 0; i < V; ++i)
	{
		for (ll j = 0; j < d; ++j)
		{
			cin>>arr[i][j];
		}
	}
	primMST(); 
	cout<<endl<<c;
	return 0; 
} 

