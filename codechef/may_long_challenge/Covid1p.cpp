#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    forn(l,t){
        int n;
        cin>>n;
        int arr[n];
        forn(i,n)
         cin>>arr[i];
        int maxi=INT_MIN,mini=INT_MAX;
        forn(i,n){
            int current_num=1;
            for(int j=i;j<n-1;j++){
                if((arr[j+1]-arr[j])<=2){
                    current_num++;
                }
                else
                {
                    break;
                }
                
            }
            for(int j=i;j>0;j--){
                if((arr[j]-arr[j-1])<=2){
                    current_num++;
                }
                else
                {
                    break;
                }
                
            }
            maxi=max(maxi,current_num);
            mini=min(mini,current_num);
        }
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}