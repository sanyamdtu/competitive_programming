#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
// bool comp(pair<int,int> a,pair<int,int> b){
//     return ()
// }
int main(){
    int t;
    cin>>t;
    forn(l,t){
        ll n,k;
        cin>>n>>k;
        int arr[n];
        forn(i,n)
        cin>>arr[i];
        map<int,pair<int,list<int>>> sum_withfrequency;
        map<int,int> frequency_withsum;
        for(int i=0;i<n/2;i++){
            sum_withfrequency[arr[i]+arr[n-i-1]].first++;
            sum_withfrequency[arr[i]+arr[n-i-1]].second.insert(max(arr[i],arr[n-i-1])); 
        }
        for(auto i:sum_withfrequency){
            frequency_withsum[i.second.first]++;
        }
        for(auto i:frequency_withsum){
            for(auto a:sum_withfrequency[i.first].second){
                
            }
        }
    }
}