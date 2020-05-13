#include <bits/stdc++.h>
using namespace std;

//SARTHAK

string table[] = { "","", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void func(string s,int num){
    if(num==0){
        cout<<s<<endl;
        return ;
    }
    for(int i=0;table[num%10][i]!='\0';i++){
        s.push_back(table[num%10][i]);
        func(s,num/10);
        s.pop_back();
    }
}

    

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
   int rev=0;
    while(num){
        rev=rev*10+(num%10);
        num=num/10;
    }
   func("\0",rev);    

  
}
