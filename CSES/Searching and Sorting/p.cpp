#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      if(n==1||n==2){
        cout<<"Alice";
      }
      else if(n%2==0){
        cout<<"Alice";
      }
      else
        cout<<"Bob";
    cout<<endl;
   }
   
}
