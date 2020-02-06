    /*
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
    int k=0;
    void func(int n,string ans[],string s){
        if(!n){
            ans[k]=s;
            k++;
            cout<<ans[k]<<endl;
            return ;
        }
        int i=0;
        while(table[n%10][i]!='\0'){
            s.push_back(table[n%10][i]);
            func(n/10,ans,s);
            s.pop_back();
            i++;
        }    
    }
    int keypad(int num, string output[]){
        /* 
        Insert all the possible combinations of the integer number into the output 
        string array. You do not need to print anything, just return the number of 
        strings inserted into the array.
        */
        int i=0,n=0;
        while(num>0){
            n=10*n+num%10;
            num/=10;
            i++;
        }
        func(n,output,"\0");
    }
