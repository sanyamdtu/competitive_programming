#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b, c,d;
        cin>>a>>b>>c>>d;
        if(c<=d && a>b)
         cout<<-1<<endl;
        else{
            ll count=b,time=b;
            // while(count<a){
            //     time+=c;
            //     count+=(c-d);
            // }
            if(count<a){
                int i=(a-b)/(c-d);
               ((a-b)%(c-d))?i++:i;
               time+=i*c;
            }
            
            cout<<time<<endl;
        }
    }
}