#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        if(n==2||n==1){

        }
        else{
            if(n%2==0)
             ans=(n/2)-1;
            else
            {
                ans=n/2;
            }
             
        }
        cout<<ans<<endl;
        /* code */
    }

    //381621773
    //763243547
}