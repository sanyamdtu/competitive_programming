#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
bool isbipa(int src,vector<vector<int>> g,int vis[]){
    queue<int> q;
    q.push(src);
    vis[src]=1;
    set<int> s1,s2;
    while(!q.empty()){
        int a=q.front();
        q.pop();
        for (int i = 1; i < g[a].size(); ++i)
        {
            if(vis[g[a][i]]==0){
                    if(s1.find(g[a][i])!=s1.end()){
                    if(s1.find(a)!=s1.end()){
                        return false;
                    }
                }
                else if(s2.find(g[a][i])!=s2.end()){
                    if(s2.find(a)!=s2.end()){
                        return false;
                    }
                }
                else{
                    if(s1.find(a)!=s1.end()){
                        s2.insert(g[a][i]);
                    }
                    else
                        s1.insert(g[a][i]);
                    vis[g[a][i]]=1;
                    q.push(g[a][i]);
                }
            }
        }
    }
    for(auto i:s1)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:s2)
        cout<<i<<" ";
    cout<<endl;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int t = 1; t <=T; ++t)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> g(n+1);
        for (int i = 0; i < m; ++i)
        {
            int x,y;
            cin>>x>>y;
             g[x].pb(y);
             g[y].pb(x);
        }
        int vis[n+1];
        memset(vis,0,sizeof(vis));
        int a=1;
        
        for (int i = 1; i <g.size() ; ++i)
        {
            if(vis[i]==0){
                set<int> s1,s2;
                s1.insert(i);
                if(!isbipa(i,g,vis)){
                    a=0;
                }
            }
        }
        cout<<"Scenario #"<<t<<":"<<endl;
        if(a==1)
            cout<<"No suspicious bugs found!";
        else
            cout<<"Suspicious bugs found!";
        cout<<endl;
    }
    return 0;
}