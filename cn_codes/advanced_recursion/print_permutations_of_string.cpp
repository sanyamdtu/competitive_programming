#include <bits/stdc++.h>
using namespace std;

void printPermutations(string s,int i=0){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    if(i+1==s.size()){
        cout<<s<<endl;
        return ;
    }
    //for(int j=0;s[j]!='\0';j++){
        swap(s[i+1],s[i]);
        // printPermutations(s,i+1);
        // swap(s[i+1],s[i]);
        printPermutations(s,i+1);
    //}

}
int main(){
    string s;
    cin>>s;
    printPermutations(s,0);
}