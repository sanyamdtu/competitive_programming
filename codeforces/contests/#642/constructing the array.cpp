#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define pb(x) push_back(x)
//#define mp makepair<>
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        memset(arr,0,sizeof(arr));
        map<int,pair<int,int>> map;
        forn(i,n){
            if(map.empty()){
                int l=1;
                int r=n;
                int pos=((r+l+1)%2==1)?(r+l)/2:(r+l-1)/2;
                map.insert({pos-1,{0,pos-2}});
                arr[pos-1]=i+1;
            }
            else{
                auto itr=map.begin();
                int size=itr->first;
                int l=itr->second.first+1;
                int r=itr->second.second+1;
                int pos=((r+l+1)%2==1)?(r+l)/2:(r+l-1)/2;
                arr[pos-1]=i+1;
                
            }
        }
    }
}