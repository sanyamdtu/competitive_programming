#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    forn(l,t){
        int n;
        cin>>n;
        int k;
        cin>>k;
        ll arr[n];
        forn(i,n)
         cin>>arr[i];
        pair<int,int> min_indices[k];
        memset(min_indices,pair<int,int>(INT_MAX,INT_MAX),sizeof(min_indices));
        for(int j=1;j<=k;j++){
            for(int i=0;i<n;i+=k){
            
            }
        }
    }
    return 0;
}

//3
///1 4 2 5 7 3 6