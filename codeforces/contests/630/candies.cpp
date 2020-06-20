#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    forn(l,t){
        ll k=1,n,ans=1;
        cin>>n;
        do{
            k++;
            ans=pow(2,k)-1;
        }while(n%ans!=0);
        cout<<(n/ans)<<endl;
    }
}