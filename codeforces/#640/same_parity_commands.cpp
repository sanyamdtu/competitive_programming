#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,d,a1;
        cin>>n>>k;
        if(n>k){
            a1=k;
        }
        else{
            d=k/(n-1);
            a1=d*n+(k%(n-1));
            if(k%(n-1)==0)
             a1--;
        }
        cout<<a1<<endl;
    }
}