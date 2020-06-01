/**//*
Return Keypad Code
Send Feedback
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : The order of strings are not important.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/

#include <bits/stdc++.h>
using namespace std;
string table[] = { "","", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void func(string s,int num,string output[]){
    if(num==0){
        cout<<s<<endl;
        return ;
    }
    for(int i=0;table[num%10][i]!='\0';i++){
        s.push_back(table[num%10][i]);
        func(s,num/10,output);
        s.pop_back();
    }
}
int keypad(int num, string output[]){
    int rev=0;
    while(num){
        rev=rev*10+(num%10);
        num=num/10;
    }
   func("\0",rev,output);    
}
