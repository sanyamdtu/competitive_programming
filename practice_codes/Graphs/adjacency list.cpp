#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

class graph{
	int v;
	list<int> *l;
    public:
    	graph(int v){
    		this->v =v;
    		l=new list<int>[v];
    	}
    	void addedge(int x,int y){
    		l[x].pb(y);
    		l[y].pb(x);
    	}
    	void printList(){
    	   	for (int i = 0; i < v; ++i)
    	   	{
    	   		cout<<"node "<<i<<" ";
    	   		for(auto a:l[i])
    	   			cout<<a<<" ";
    	   		cout<<endl;
    	   	}
    	}

};


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	graph g(5);
	g.addedge(1,3);
	g.addedge(2,0);
	g.addedge(0,4);
	g.printList();
	return 0;
}