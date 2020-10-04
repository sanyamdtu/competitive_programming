#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
class Edge 
{ 
	public: 
	ll src, dest, weight; 
}; 
Edge yu[12750409]; 
class Graph 
{ 
	public: 
	ll V, E; 
	Edge *edge;
}; 

Graph* createGraph(ll V, ll E) 
{ 
	Graph* graph = new Graph; 
	graph->V = V; 
	graph->E = E; 
	graph->edge = ::yu; 
	return graph; 
} 

class subset 
{ 
	public: 
	ll parent; 
	ll rank; 
}; 

ll find(subset subsets[], ll i) 
{ 
	if (subsets[i].parent != i) 
		subsets[i].parent = find(subsets, subsets[i].parent); 

	return subsets[i].parent; 
} 

void Union(subset subsets[], ll x, ll y) 
{ 
	ll xroot = find(subsets, x); 
	ll yroot = find(subsets, y); 



	if (subsets[xroot].rank < subsets[yroot].rank) 
		subsets[xroot].parent = yroot; 
	else if (subsets[xroot].rank > subsets[yroot].rank) 
		subsets[yroot].parent = xroot; 



	else
	{ 
		subsets[yroot].parent = xroot; 
		subsets[xroot].rank++; 
	} 
} 

ll myComp(const void* a, const void* b) 
{ 
	Edge* a1 = (Edge*)a; 
	Edge* b1 = (Edge*)b; 
	return a1->weight > b1->weight; 
} 

void KruskalMST(Graph* graph) 
{ 
	ll V = graph->V; 
	Edge result[V];
	ll e = 0;
	ll i = 0;
	qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp); 
	subset *subsets = new subset[( V * sizeof(subset) )]; 
	for (ll v = 0; v < V; ++v) 
	{ 
		subsets[v].parent = v; 
		subsets[v].rank = 0; 
	} 
	while (e < V - 1 && i < graph->E) 
	{ 
		Edge next_edge = graph->edge[i++]; 
		ll x = find(subsets, next_edge.src); 
		ll y = find(subsets, next_edge.dest); 	
		if (x != y) 
		{ 
			result[e++] = next_edge; 
			Union(subsets, x, y); 
		} 
	} 
	ll sum=0;
	for (i = 0; i < e; ++i) 
		sum+=result[i].weight; 
	cout<<sum;
	return; 
} 

int main() 
{ 
	ll n,d;
	cin>>n>>d;
	ll arr[n][n];
	if(n<=7007){
		ll ne=(n*(n-1))/2;
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = 0; j < d; ++j)
			{
				cin>>arr[i][j];
			}
		}
		Graph* graph = createGraph(n, ne);
		ll l=0; 
		for (ll i = 0; i < n; ++i)
		{
			for (ll j = i+1; j < n; ++j)
			{
					graph->edge[l].src=i;
					graph->edge[l].dest=j;
					graph->edge[l].weight=0;
					for (ll k = 0; k < d; ++k)
					{
						graph->edge[l].weight+=abs(arr[i][k]-arr[j][k]);
					}
					l++;
			}
		}
		KruskalMST(graph); 
	}
	else
		cout<<0;

	return 0; 
} 

