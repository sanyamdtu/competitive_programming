/*
//Divisors Of Factorial
Given a number, find the total number of divisors of the factorial of the number.
Since the answer can be very large, print answer modulo 10^9+7.
Input
The first line contains T, number of testcases.


T lines follows each containing the number N.
Output
Print T lines of output each containing the answer.
Constraints
1 <= T <= 500

0 <= N <= 50000
Sample Input:
3
2
3
4
Sample Output:
2
4
8
*/

#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=2;i<=n;i++)
#define pb push_back
#define m 1000000007
typedef long long ll;
int prime[50000];

ll primesieve(int n){
    vector<int> v;
    forn(i,n){
        if(prime[i])
         v.pb(i);
    }
    ll ans=1;
    for(int i=0;i<v.size();i++){
        ll occur=0;
        ll k=1;
        while(pow(v[i],k)<=n){
            occur+=(n/pow(v[i],k));
            occur%=m;
            k++;
        }
        ans=((ans)*(occur+1))%m;
    }
    return ans%m;
} 
int main(){
    int t;
    cin>>t;
    for(ll i=0;i<=50000;i++){
      prime[i]=1;
    }
 
    for(ll i=2;i<=50000;i++){
       for(ll j=i*i;j<=50000;j+=i){
          prime[j]=0;
       }
    }

    while(t--){
        int n;
        cin>>n;
        ll ans=1;
        cout<<primesieve(n)<<endl;
    }
}