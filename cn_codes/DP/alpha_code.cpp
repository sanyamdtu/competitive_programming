/*
AlphaCode-Question
Send Feedback
Alice and Bob need to send secret messages to each other and are discussing ways to encode their messages:
Alice: “Let’s just use a very simple code: We’ll assign ‘A’ the code word 1, ‘B’ will be 2, and so on down to ‘Z’ being assigned 26.”

Bob: “That’s a stupid code, Alice. Suppose I send you the word ‘BEAN’ encoded as 25114. You could decode that in many different ways!”

Alice: “Sure you could, but what words would you get? Other than ‘BEAN’, you’d get ‘BEAAD’, ‘YAAD’, ‘YAN’, ‘YKD’ and ‘BEKD’. I think you would be able to figure out the correct decoding. And why would you send me the word ‘BEAN’ anyway?”

Bob: “OK, maybe that’s a bad example, but I bet you that if you got a string of length 5000 there would be tons of different decodings and with that many you would find at least two different ones that would make sense.”

Alice: “How many different decodings?”

Bob: “Jillions!”
For some reason, Alice is still unconvinced by Bob’s argument, so she requires a program that will determine how many decodings there can be for a given string using her code.
Input
Input will consist of multiple input sets. Each set will consist of a single line of at most 5000 digits representing a valid encryption (for example, no line will begin with a 0). There will be no spaces between the digits. An input line of ‘0’ will terminate the input and should not be processed.
Output
For each input set, output the number of possible decodings for the input string. Print your answer taking modulo "10^9+7"
Sample Input:
25114
1111111111
3333333333
0
Sample Output:
6
89
1
*/
#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
typedef long long ll;
// ll func(string s){
//     const int n=s.length();
//     int dp[n+1][2];
//     memset(dp,0,sizeof(dp));
//     dp[1][0]=1;
//     dp[1][1]=0;
//     for(int i=2;i<=n;i++){
//         if(s[i-1]=='0')
//         return 0;
//         dp[i][0]=(dp[i-1][0]+dp[i-1][1])%m;

//         if((s[i-2]-'0')>2 ||((s[i-1]-'0')>6 && (s[i-2]-'0')==2)){
//             dp[i][1]=0;
//         }
//         else{
//             dp[i][1]=(dp[i-2][0]+dp[i-2][1])%m;
//             dp[2][1]=1;
//         }
         
//     }
//     return (dp[n][0]+dp[n][1])%m;
// }
ll func(string s,ll dp[],int idx){
    if(idx==0)
     return 1;
    if(idx==-1)
     return 1;
    if(dp[idx])
     return dp[idx];
    ll count=func(s,dp,idx-1);
    if((10*(s[idx-1]-'0')+(s[idx]-'0'))<27)
    {
        count=(count+func(s,dp,idx-2))%m;    
    }
   
    dp[idx]=count;   
    return dp[idx];
}
int main()
{
    while(true){
        string s;
        cin>>s;
        if(s[0]=='0')
         break;
        ll dp[5000]={ 0 };
        cout<<func(s,dp,s.length()-1)<<endl; 
    }
    return 0;
}
/*
aabc
kbc
aaw
kw
alc
25114
1111111111
3333333333
123112563
12345654321346864
301
1020
2002
201
3020
0
*/
//1 1 2 3
//1 2 3 5
//0 1 2 4