#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    long long x,y,l,r;
    cin>>x>>y>>l>>r;
    long long ans_max=INT_MIN,ans_index=0;
    for(long long i=0;i<=r;i++){
        if(ans_max<(x&i)*(y&i)){
            ans_index=i;
            ans_max=(x&i)*(y&i);
        }
    }
    if(ans_max==0)
     ans_index=0;
    cout<<ans_index<<endl;
}
//35677 688889 0 53455