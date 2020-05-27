/*
Find power of a number
Send Feedback
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. 
You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1
Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Constraints:
0 <= x <= 8 
0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void power(int n,ll num,int x,int i){
    if(i+1>n/2){
        while(i+1<=n){
            num=x*num;
            i++;
        }
        cout<<num;
        return;
    }
    power(n,num*num,x,i*2);    
}
int main(){
    int x,n;
    cin>>x>>n;
    power(n,x,x,1);
}