/*
Extract Unique characters
Send Feedback
Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.
Input format :
String S
Output format :
Output String
Constraints :
1 <= Length of S <= 50000
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde
*/
#include<bits/stdc++.h>
using namespace std;
char* uniqueChar(char *str){
    // Write your code here
    char *arr=new char[50000];
    set<char> s;
    int i=0,c=0;
    i=0;
    while(str[i]!=0){
        if(s.find(str[i])==s.end()){
            cout<<str[i];
            arr[c]=str[i];
            c++;
            s.insert(str[i]);
        }
        i++;
    }
    return arr; 
}
///////////////////               editorial
