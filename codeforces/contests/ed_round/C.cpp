#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265359
int main(){
    int t;
    cin>>t;
    while(t--){
        double n;
        cin>>n;
        //double ang = 90.0/n;
        double a= pi/(2.0 * n) ;
        cout<<setprecision(11)<<(1.0/tan(a))<<endl;
    }
}