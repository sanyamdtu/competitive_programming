#define ll int
#define pb push_back
#define make_pair mp
#define first f
#define second s
#define upper_bound ub
#define lower_bound lb
#define MOD 1000000007
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;


#define ordered_set tree<pair<ll,ll> , null_type,less<pair<ll,ll> >, rb_tree_tag,tree_order_statistics_node_update>ll fn
ll st[300000*4+5],len=1;
void update(ll ver, ll left, ll right, ll ind, ll val){
    if(left==right && left==ind){
        st[ver]=max(st[ver],val);
    }
    else if(left>ind||right<ind){
        return;
    }
    else{
        ll mid = left + (right-left)/2;
        update(2*ver+1,left,mid,ind,val);
        update(2*ver+2,mid+1,right,ind,val);
        st[ver]=max(st[2*ver+1],st[2*ver+2]);
    }
}
void get_max(ll ver, ll left, ll right, ll leftq, ll rightq, ll &maxans){
    if(left==right && left>=leftq && left<=rightq){
        maxans=max(maxans,st[ver]);
    }
    else if(leftq>right||rightq<left){
        return;
    }
    else if(leftq<=left && rightq>=right){
        maxans=max(maxans,st[ver]);
    }
    else{
        ll mid = left + (right-left)/2;
        get_max(2*ver+1,left,mid,leftq,rightq,maxans);
        get_max(2*ver+2,mid+1,right,leftq,rightq,maxans);
    }
}
void solve(){
  ll n,k;cin>>n>>k;
  ll a[n];
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  while(len<=300000){len*=2;}
  memset(st,0,sizeof(st));
  ll ans=0;
  for(ll i=0;i<n;i++){
    ll val=a[i];
    ll max_ans=0;
    get_max(0,0,len-1,val-k,val+k,max_ans);
    ans=max(max_ans+1,ans);
    update(0,0,len-1,val,max_ans+1);
  }
  cout<<ans;
}

int main ()
{
  ios_base::sync_with_stdio (false);
  cin.tie (NULL);
  ll t;
  //cin>>t;
  t = 1;
  while (t)
    {
      solve();t--;
      //cout<<"end of test case"<<endl;
    }
  return 0;
}
