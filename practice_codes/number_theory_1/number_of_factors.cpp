/*
Number Of Factors
Send Feedback
A number is called n-factorful if it has exactly n distinct prime factors. Given
positive llegers a, b, and n, your task is to find the number of integers between a 
and b, inclusive, that are n-factorful. We consider 1 to be 0-factorful.
Input
Your input will consist of a single integer T followed by a newline and T test cases. 
Each test cases consists of a single line containing integers a, b, and n as described 
above.
Output
Output for each test case one line containing the number of n-factorful integers in 
[a, b].
Constraints
T < 10000

1 ≤ a ≤ b ≤ 10^6

0 ≤ n ≤ 10
Sample Input
5
1 3 1
1 10 2
1 10 3
1 100 3
1 1000 0
Sample Output
2 
2
0
8
1
*/
//
/*
n/2+

*/

#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define forn(i,n) for(int i=1;i<=n;i++)
#define max 1000001
typedef long long ll;
int prime[max];
int prefixcurr[max][11];
int main(){
    //cout<<"ok"<<endl;
    int t;
    cin>>t;
    //cout<<"ok"<<endl;
    
    //cout<<"ok"<<endl;
    forn(i,max)
     prime[i]=0;
    //cout<<"ok"<<endl;
    for(ll i=2;i<=max;i++){
        //cout<<i<<" ";
        if(prime[i]==0){
            for(ll j=i*2;j<=max;j+=i){
              prime[j]++;
            }
            prime[i]+=1;
        }
        
    }
    
    memset(prefixcurr,0,sizeof(prefixcurr));
    forn(i,max){
        for(ll j=0;j<=10;j++){
            prefixcurr[i][j]=prefixcurr[i-1][j];
        }
        if(prime[i]<=10){
            prefixcurr[i][prime[i]]=prefixcurr[i-1][prime[i]]+1;
        }
    }
   // cout<<"ok"<<endl;
    forn(l,t){
        ll a,b,n;
        cin>>a>>b>>n;
        cout<<prefixcurr[b][n]-prefixcurr[a-1][n]<<endl;
    }
}
