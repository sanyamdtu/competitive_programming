#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 998244353
#define INF 1e18
typedef  long long ll;
ll arr[100001];
ll n,k;
vector<ll> g[100001];
ll xop;
ll f,c;
ll temp[100001];
ll xordfs(vector<ll> g[],ll src,ll vis[]){
  vis[src]=1;
  ll a=arr[src];
  for(auto i:g[src]){
      if(vis[i]==0){
        a=a^(xordfs(g,i,vis));
      }
  }
  ll b=xop^a;
  if(b==a){
    f=1;
  }
  else if(b==0){ 
    temp[src]=a;
  }
  return a;
}
void dfs(vector<ll> g[],ll src,ll vis[],unordered_map<ll,ll> &m){
  vis[src]=1;
  ll a=temp[src];
  ll b=xop^a;
  if(b==a){
    f=1;
  }
  else if(a!=-1&&b==0){ 
    if(m[a]>0)
      c=1;
  }
  for(auto i:g[src]){
      if(vis[i]==0){
        (dfs(g,i,vis,m));
      }
  }
  m[a]++;
}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  ll t;
  cin>>t;
  cout<<t<<endl;
  while(t--){
    f=0,c=0;
    cin>>n>>k;
    xop=0;
    for (ll i = 1; i <=n; ++i)
    {
      cin>>arr[i];
      xop=xop^arr[i];
      g[i].clear();
    }
    if(n==1){
      cout<<"NO"<<endl;
      continue;
    }
    if(xop==0){
      cout<<"YES"<<endl;
      continue;
    }
    ll vis[n+1];
    for (ll i = 1; i <=n-1; ++i)
    {
      ll a,b;
      cin>>a>>b;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    for (int i = 1; i < n+1; ++i)
    {
      temp[i]=-1;
    }
    memset(vis,0,sizeof(vis));
    xordfs(g,1,vis);
    memset(vis,0,sizeof(vis));
    unordered_map<ll,ll> m;
    dfs(g,1,vis,m);
    if(f==1){ 
      cout<<"YES";
    }
    else if(c==1&&k>2){
      cout<<"YES";
    }
    else
      cout<<"NO";
    cout<<endl;
  }
}