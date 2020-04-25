/*
Given an integer array A which contains duplicates . Remove duplicates from the array and return a new array without any duplicates.
That is, it should contain only unique elements.
NOTE : Best case time complexity-O(n) where n is the no of elements in the array.
Input Format :
Line 1 : Contains size of array
Line 2 : N integers which are elements of the array separated by space
Sample Input :
10 
105 106 111 114 105 135 138 111 147 114
Sample Output :
105 106 111 114 135 138 147
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    set<int> s;
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
        s.insert(num);
    }
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;    
}