#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  string s;
  cin>>s;
  int n=s.length();
  vector<int> vis[10];
  int in[10];
  
  memset(in,0,sizeof(in));
  for(int i=0;i<n;i++){
    vis[s[i]-'0'].pb(i);
  }
  
  queue<int> q;
  q.push(0);
  int dist[n];
  for (int i = 0; i < n; ++i)
  {
    dist[i]=INT_MAX;
  }
  dist[0]=0;
  for (int i = 0; i < 10; ++i)
  {
    in[i]=0;
  }
  while(!q.empty()){
    int a=q.front();
    if(a==n-1)
      break;
    // cout<<a<<" "<<dist[a]<<endl;
    if(a!=n-1&&dist[a+1]==INT_MAX){
      dist[a+1]=dist[a]+1;
      q.push(a+1);
    }
    if(a>0&&dist[a-1]==INT_MAX){
      dist[a-1]=dist[a]+1;
      q.push(a-1);
    }
    q.pop();
    if(in[s[a]-'0']==0){
      for(auto i:vis[s[a]-'0']){
        if(dist[i]==INT_MAX){

          dist[i]=dist[a]+1;
          q.push(i);
        }
      }
      in[s[a]-'0']=1;
    }
   
  }
  cout<<dist[n-1];
  return 0;
}