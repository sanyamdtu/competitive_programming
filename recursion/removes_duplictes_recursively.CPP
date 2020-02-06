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
void remove(char arr[],int i){
    while(arr[i-1]!='\0'){
        arr[i]=arr[i+1];
    }
}
void func(char arr[],int index){
    if(arr[index]=='\0')
     return ;
    if(arr[index]==arr[index-1])
     remove(arr,index);
    func(arr,index+1);
}
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/  
    func(input,1);
}