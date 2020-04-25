/*
Remove Duplicates Recursively
Send Feedback
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S
Output Format :
Output string
Constraints :
1 <= Length of String S <= 10^3
Sample Input :
aabccba
Sample Output :
abcba
*/
#include<bits/stdc++.h>
using namespace std;
 void func(int i,char *input){
        if(input[i+1]=='\0')
          return;
        if(input[i]==input[i+1]){
            input[i+1]=input[i+2];
        }
        func(i+1,input);
    }   
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
    func(0,input);
}