/*
Print all Codes - String
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. Just print them in different lines.
Input format :
A numeric string S
Output Format :
All possible codes in different lines
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw
*/

#include<bits/stdc++.h>
using namespace std;
void printAllPossibleCodes(string s,int num,int i,string ans) {
    if(i>s.length()){
        cout<<ans<<endl;
        return ;
    }
    if(num>27)
     return ;
    char ch='a'+num-1;
   // cout<<ch<<num;
    ans.push_back(ch);
    int n=s[i]-'0';
    printAllPossibleCodes(s,n,i+1,ans);
    if(i+1<s.length()){
        n*=10;
        n+=(s[i+1]-'0');
        printAllPossibleCodes(s,n,i+2,ans);
    }
}


int main(){
    string input;
    cin >> input;
    printAllPossibleCodes(input,(input[0]-'0'),1,"\0");
    //cout<<"ok";
    if(input.length()>=2)
    {
        int n=10*(input[0]-'0')+(input[1]-'0');
        printAllPossibleCodes(input,n,2,"\0");
    }
    
    return 0;
}
