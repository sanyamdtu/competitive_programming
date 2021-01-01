#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

string permutation(string s,int n,int* arr) 
{
    //function to perform permuatation of bits according to passed array
    string new_str=""; 
    int i=0;
    while(i<n) { 
        new_str+=s[arr[i]-1];
        i++;
    } 
    return new_str; 
} 
string hexa_to_binary(string str)
{
    //hexadecimal tp binary conversion
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
string binary_to_hexa(string str)
{
    //binary to hexadeimal conversion
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
    //take xor of the passed strings
    string xor_= ""; 
    int i=0;
    while(i<s1.size()){ 
        if (s1[i] == s2[i]) { 
            xor_+="0"; 
        } 
        else { 
            xor_+="1"; 
        } 
        i++;
    } 
    return xor_; 
} 
string shift_to_left(string str, int shift_no) 
{ 
    //shift bits 
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
string encryption(string str,vector<string> roundkey)
{
	str=hexa_to_binary(str); //hexadecimal to binary conversion
	
	//initial permutation table
	int IP[64] = { 58, 50, 42, 34, 26, 18, 10, 2,
	               60, 52, 44, 36, 28, 20, 12, 4, 
                   62, 54, 46, 38, 30, 22, 14, 6,           
		           64, 56, 48, 40, 32, 24, 16, 8, 
                   57, 49, 41, 33, 25, 17, 9, 1, 
                   59, 51, 43, 35, 27, 19, 11, 3, 
                   61, 53, 45, 37, 29, 21, 13, 5, 
                   63, 55, 47, 39, 31, 23, 15, 7 }; 
    //perform initial permutation
    str=permutation(str,64,IP);
    //divide the string into two equal sub-strings
	string l=str.substr(0,32);
	string r=str.substr(32,32);
	//expansion table 
	int expansion[48] = { 32, 1, 2, 3, 4, 5, 4, 5, 
                           6, 7, 8, 9, 8, 9, 10, 11, 
                          12, 13, 12, 13, 14, 15, 16, 17, 
                          16, 17, 18, 19, 20, 21, 20, 21, 
                          22, 23, 24, 25, 24, 25, 26, 27, 
                          28, 29, 28, 29, 30, 31, 32, 1 };
    //straight permutation tabe                          
    int per[32] = { 16, 7, 20, 21, 
                    29, 12, 28, 17, 
                    1, 15, 23, 26, 
                    5, 18, 31, 10, 
                    2, 8, 24, 14, 
                    32, 27, 3, 9, 
                    19, 13, 30, 6, 
                    22, 11, 4, 25 };
    //s-box table						  
     int s_box[8][4][16] = { { 14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7, 
                          0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8, 
                          4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0, 
                          15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13 },
						   
                             { 15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10, 
                          3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5, 
                          0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15, 
                          13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9 }, 
  
                             { 10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8, 
                          13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1, 
                          13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7, 
                          1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12 }, 
                          
                             { 7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15, 
                          13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9, 
                          10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4, 
                          3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14 },
						   
                             { 2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9, 
                          14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6, 
                          4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14, 
                          11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3 }, 
                      
					         { 12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11, 
                          10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8, 
                          9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6, 
                          4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13 }, 
                         
						    { 4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1, 
                          13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6, 
                          1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2, 
                          6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12 }, 
                        
						    { 13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7, 
                          1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2, 
                          7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8, 
                          2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11 } };  
    int i=0;						  
    while(i<16) { 
        string right_expanded= permutation(r,48,expansion); 
        //take xor of roundkey[i] and right-expanded
        string XOR = take_xor(roundkey[i], right_expanded);  
        string p = ""; 
        for (int i=0;i<8;i++) { 
            int row = 2 * int(XOR[i * 6] - '0') + int(XOR[i * 6 + 5] - '0'); 
            int col = 8 * int(XOR[i * 6 + 1] - '0') + 4 * int(XOR[i * 6 + 2] - '0') + 2 * int(XOR[i * 6 + 3] - '0') + int(XOR[i * 6 + 4] - '0'); 
            int z = s_box[i][row][col]; 
            p += char(z/ 8 + '0'); 
            z= z% 8; 
            p += char(z/ 4 + '0'); 
            z= z% 4; 
            p += char(z/ 2 + '0'); 
            z= z% 2; 
            p += char(z+ '0'); 
        } 
        p = permutation(p,32,per);  
        XOR= take_xor(p,l); 
        l=XOR;
        if (i!= 15) { 
            string temp=l;
            l=r;
            r=temp;
        } 
    i++;
    }  
    //join the sub-strings
    string combine = l+r;
    //final permutation table
    int perm[64] = { 40, 8, 48, 16, 56, 24, 64, 32, 
                     39, 7, 47, 15, 55, 23, 63, 31, 
                     38, 6, 46, 14, 54, 22, 62, 30, 
                     37, 5, 45, 13, 53, 21, 61, 29, 
                     36, 4, 44, 12, 52, 20, 60, 28, 
                     35, 3, 43, 11, 51, 19, 59, 27, 
                     34, 2, 42, 10, 50, 18, 58, 26, 
		             33, 1, 41,  9, 49, 17, 57, 25 };
		             //call ecryption to encrypt the plain text
    string cipher_text = binary_to_hexa(permutation(combine,64,perm)); 
    return cipher_text; 
}
int main(){
	string s;
	string key;
	//left shift table
	int shift_table[16] = { 1, 1, 2, 2, 
                            2, 2, 2, 2, 
                            1, 2, 2, 2, 
                            2, 2, 2, 1 };
    //8th bit drop table   
	int P1[56] = { 57, 49, 41, 33, 25, 17, 9, 
                   1, 58, 50, 42, 34, 26, 18, 
                   10, 2, 59, 51, 43, 35, 27, 
                   19, 11, 3, 60, 52, 44, 36, 
                   63, 55, 47, 39, 31, 23, 15, 
                   7, 62, 54, 46, 38, 30, 22, 
                   14, 6, 61, 53, 45, 37, 29, 
                   21, 13, 5, 28, 20, 12, 4 };
                   //input plain text and key
    s= "123456ABCD132536"; 
    key = "AABB09182736CCDD"; 
	key=hexa_to_binary(key); 
	//permute the key
    key=permutation(key,56,P1);
    string l=key.substr(0,28);
    string r=key.substr(28,28);
    //compression
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
    //gerneration of roundkeys
	while(i<16){
        l=shift_to_left(l,shift_table[i]); 
        r=shift_to_left(r,shift_table[i]); 
        string join=l+r; 
        string roundk=permutation(join,48,compression); 
        roundkey.push_back(roundk);
        i++;
	}
	//encryption
	string encrypted_text=encryption(s,roundkey);
	cout<<encrypted_text<<endl;
	//decryption
	reverse(roundkey.begin(),roundkey.end());
	string decrypted_text=encryption(encrypted_text,roundkey);
	cout<<decrypted_text;
return 0;
}