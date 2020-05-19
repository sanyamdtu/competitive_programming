/*
Strange order
Given an integer n . Initially you have permutation p of size n : p[i] = i . To build 
new array a from p following steps are done while permutation p is not empty:
Choose maximum existing element in p and define it as x ; Choose all such y in p that
gcd ( x , y ) ≠ 1 ; Add all chosen numbers into array a in decreasing order and 
remove them from permutation. Your task is to find a after p became empty.
Note: gcd ( a , b ) is the greatest common divisor of integers a and b .
Input format
Input contains single integer n ( 1 ≤ n ≤ 2 * 10^6) — the size of permutation p p.
Output format
Print n integers — array a .
Sample Input:
5
Sample Output:
5 4 2 3 1
Explanation
It's needed 4 iterations to create array a:
Add 5
Add 4 and 2
Add 3
Add 1
*/

#include<bits/stdc++.h>
using namespace std;
#define max 2000000
#define forn(i,s,n) for(int i=s;i<n;i++)
typedef long long ll;
int arr[max+1];
bool marked[max+1];
int main(){
        int n,k=0;
        cin>>n;
        vector<int> final_ans;
        forn(i,1,n+1)
            arr[i]=i;
        for(int i=2;i*i<=n;i++){
            if(arr[i]==i)
             for(int j=2*i;j<=n;j+=i){
                 arr[j]=i;
             }
        }
        forn(i,0,n+1)
         marked[i]=false;
        for(int i=n;i>=2;i--){
            vector<int> ans;
            if(!marked[i]){
               int lpd=arr[i];
               int x=i;
               ans.push_back(i);
               marked[i]=true;
               while(x!=1){
                   for(int j=i-lpd;j>1;j-=lpd){
                        if(!marked[j]){
                           marked[j]=true;
                           ans.push_back(j);
                        }
                   }
                   while(x%lpd==0&&lpd>1){
                        x/=lpd;
                   }
                    lpd=arr[x];
               }
                
               sort(ans.begin(),ans.end());
               for(int i=ans.size()-1;i>=0;i--){
                   final_ans.push_back(ans[i]);
                   k++;
               }
            }
        }
        forn(i,0,final_ans.size())
         cout<<final_ans[i]<<" ";
        cout<<1<<endl;
}