#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

string permutation(string s,int n,int* arr) 
{ 
    string new_str=""; 
    for (int i=0;i<n;i++) { 
        new_str[i]=s[arr[i]-1]; 
    } 
    return new_str; 
} 
string hexa_to_binary(string str){
	unordered_map<char,string> a;
	a['0']="0000";
	a['1']="0001";
	a['2']="0010";
	a['3']="0011";
	a['4']="0100";
	a['5']="0101";
	a['6']="0110";
	a['7']="0111";
	a['8']="1000";
	a['9']="1001";
	a['A']="1010";
	a['B']="1011";
	a['C']="1100";
	a['D']="1101";
	a['E']="1110";
	a['F']="1111";
	string enc=""; 
    for (int i = 0; i < str.size(); i++) { 
        enc+= a[str[i]]; 
    } 
    return enc;
}
string binary_to_hexa(string str){
	unordered_map<string, string> a; 
    a["0000"] = "0"; 
    a["0001"] = "1"; 
    a["0010"] = "2"; 
    a["0011"] = "3"; 
    a["0100"] = "4"; 
    a["0101"] = "5"; 
    a["0110"] = "6"; 
    a["0111"] = "7"; 
    a["1000"] = "8"; 
    a["1001"] = "9"; 
    a["1010"] = "A"; 
    a["1011"] = "B"; 
    a["1100"] = "C"; 
    a["1101"] = "D"; 
    a["1110"] = "E"; 
    a["1111"] = "F"; 
    string f = ""; 
    for (int i = 0; i < str.length(); i += 4) { 
        string dec = ""; 
        dec+= str[i]; 
        dec+= str[i + 1]; 
        dec+= str[i + 2]; 
        dec+= str[i + 3]; 
        f+= a[dec]; 
    } 
    return f;
}
string take_xor(string s1,string s2) 
{ 
    string xor_= ""; 
    for (int i = 0; i < s1.size(); i++) { 
        if (s1[i] == s2[i]) { 
            xor_+="0"; 
        } 
        else { 
            xor_+="1"; 
        } 
    } 
    return xor_; 
} 
string shift_to_left(string str, int shift_no) 
{ 
    string s = ""; 
    for (int i = 0; i <shift_no; i++) { 
        for (int j = 1; j < 28; j++) { 
            s+=str[j]; 
        } 
        s+= str[0]; 
        str = s; 
        s = ""; 
    } 
    return s; 
}
string encryption(string str){
	str=hexa_to_binary(str);
	int IP[64] = { 58, 50, 42, 34, 26, 18, 10, 2,
	               60, 52, 44, 36, 28, 20, 12, 4, 
                   62, 54, 46, 38, 30, 22, 14, 6,           
		           64, 56, 48, 40, 32, 24, 16, 8, 
                   57, 49, 41, 33, 25, 17, 9, 1, 
                   59, 51, 43, 35, 27, 19, 11, 3, 
                   61, 53, 45, 37, 29, 21, 13, 5, 
                   63, 55, 47, 39, 31, 23, 15, 7 }; 
    permutation(str,64,IP);
	string l=str.substr(0,32);
	string r=str.substr(33,64);       
	        
}
int main(){
	string s;
	string key;
	int shift_table[16] = { 1, 1, 2, 2, 
                            2, 2, 2, 2, 
                            1, 2, 2, 2, 
                            2, 2, 2, 1 };
                            
	int P1[56] = { 57, 49, 41, 33, 25, 17, 9, 
                   1, 58, 50, 42, 34, 26, 18, 
                   10, 2, 59, 51, 43, 35, 27, 
                   19, 11, 3, 60, 52, 44, 36, 
                   63, 55, 47, 39, 31, 23, 15, 
                   7, 62, 54, 46, 38, 30, 22, 
                   14, 6, 61, 53, 45, 37, 29, 
                   21, 13, 5, 28, 20, 12, 4 };
	s= "123456ABCD132536"; 
    key= "AABB09182736CCDD"; 
	key=hexa_to_binary(key); 
    key=permutation(key,56,P1);
    string l=s.substr(0,28);
    string r=s.substr(29,56);
    int compression[48] = { 14, 17, 11, 24, 1, 5, 
                         3, 28, 15, 6, 21, 10, 
                         23, 19, 12, 4, 26, 8, 
                         16, 7, 27, 20, 13, 2, 
                         41, 52, 31, 37, 47, 55, 
                         30, 40, 51, 45, 33, 48, 
                         44, 49, 39, 56, 34, 53, 
                         46, 42, 50, 36, 29, 32 };
    vector<string> roundkey;
    int i=0;
	while(i<16){
        l=shift_to_left(l,shift_table[i]); 
        r=shift_to_left(r,shift_table[i]); 
        string join=l+r; 
        string roundk=permutation(join,48,compression); 
        roundkey.push_back(roundk);  
	}
	
return 0;
}