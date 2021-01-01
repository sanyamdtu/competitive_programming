#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ioio[25][132378],degree[132378];
ll c[132378];
ll dist[132378];
vector<pair<ll,ll>> a[132378];
void ioioiii(ll k,ll ioioent,ll d,ll dis)
{
  ioio[0][k]=ioioent;
  degree[k]=d;
  dist[k]=dis;
  for(auto it:a[k])
  {
    if(it.first==ioioent)
      continue;
    ioioiii(it.first,k,d+1,dis+it.second);
  }
}
void precompute(int n)
{
  for(ll i=1;i<25;i++)
  {
    for(ll j=1;j<=n;j++)
    {
      if(ioio[i-1][j])
          {
            ioio[i][j]=ioio[i-1][ioio[i-1][j]];
          }
    }
  }
}
ll lca(ll u, ll v)
{
  if(degree[u]<degree[v])
      swap(u,v);
  ll difirst=degree[u]-degree[v];
  for(ll i=25-1;i>=0;i--)
  {
    if((1ll<<i) & difirst)
    {
      u=ioio[i][u];
    }
  }
  if(u==v)
    return u;
  for(ll i=25-1;i>=0;i--)
  {
    if(ioio[i][u] && ioio[i][u]!=ioio[i][v])
    {
      u=ioio[i][u];
      v=ioio[i][v];
    }
  }
  return ioio[0][u];
} 

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
  ll t=1,i,w,g,j,l;
  cin>>t;
  while(t--)
  {
  	ll n,q,r;
    cin>>n>>q>>r;
   for (int i = 1; i < n+1; ++i)
    {
      a[i].clear();
      j=0;
      while(j<25)
      {
        ioio[j][i]=0;
        j++;
      }
      i++;
    }
    i=n-1;
    while(i--)
    {
    	int s=0;
    	s++;
      cin>>l>>w>>g;
      a[l].push_back({w,g});
      s--;
      int st=0;
      st++;
      a[w].push_back({l,g});
    }
    ioioiii(r,0,0,0);
    // precompute(n);
    while(q--)
    {
      cin>>l>>w;
      cout<<(dist[l]+dist[w]-2*dist[lca(l,w)]);
    }
  }
}