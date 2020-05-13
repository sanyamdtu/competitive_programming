/*
Check AB
Send Feedback
Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive
 function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.
Input format :
String S
Output format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
abb
Sample Output 1 :
true
Sample Input 2 :
abababa
Sample Output 2 :
false
*/
bool check(char input[],int i,int size) {
	// Write your code here
    if(i>=size)
        return true;
    if(i==0 && input[i]!='a')
        return false;
    if(input[i]=='a'){
        if(i+1>=size||input[i+1]=='a')
            return check(input,i+1,size);
        else{
            if(i+2<=size&&input[i+2]=='b')
                return check(input,i+2,size);
            else
                return false;
        }
    }
    else if(input[i]=='b'){
        if(i+1>=size|| input[i+1]=='a')
         return check(input,i+1,size);
        else
         return false;
    }
}
bool checkAB(char input[]) {
	// Write your code here
    int i=0;
    for(i=0;input[i]!='\0';i++);
    return check(input,0,i);    
}


