/*
Number Of R's
Send Feedback
As we all know RK loves his name very much especially the character 'R' so this time 
task for you is based on his awesome name. RK gives you a string S consisting of 
characters 'R' and 'K' only. Now you are allowed to do exactly one move that is you 
have to choose two indices i and j (1<=i<=j<=|S| where |S| is string length ) and 
flip all the characters at position X where i<=X<=j. Flipping the character means :
if S[X]='R' :  //If character at position X is 'R' then change it to 'K'
  S[X]='K'  
else :          //else if character at position X is 'K' then change it to 'R'
  S[X]='R'
Now your goal is that after exactly one move you have to obtain the maximum number of 
R's as RK loves this character very much. So help RK with maximum R's.
Input
The first line contains the number of test cases T. Each test case contains a string 
S consisting of characters 'R' and 'K' only.
Output
For each test case print the maximal number of R's that can be obtained after exactly 
one move.
Constraints:
1<=T<=10

1<=|S| <=10^6 (length of string)

SAMPLE INPUT
2
RKKRK
RKKR
SAMPLE OUTPUT
4
4
Explanation
In first sample, flip the characters from 2 to 5(i=2,j=5).After flipping string becomes: RRRKR. So, it contains four R's. There is no way to make the complete string equal to RRRRR.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        int arr[s.length()];
        for(int i=0;s[i]!='\0';i++)
         if(s[i]=='R'){
             count++;
             arr[i]=-1;
         }
         else
          arr[i]=1;
        int curr_sum=0,max_sum=0;
        for(int i=0;i<s.length();i++){
            if(arr[i]+curr_sum<0){
                curr_sum=0;
            }
            else{
                if(arr[i]<0)

                curr_sum+=arr[i];
                if(max_sum<curr_sum){
                    max_sum=curr_sum;
                }
            }
        }
        if(max_sum<curr_sum){
            max_sum=max(max_sum,curr_sum);
        }
        if(max_sum>0){
            count+=max_sum;
        }
        else
             count--;
        cout<<count<<endl;
    }
}