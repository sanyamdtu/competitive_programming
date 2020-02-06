/*All Indices of Number
Send Feedback
Given an array of length N and an integer x, you need to find all the indexes where x
is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
indexes where x is present in the array (separated by space)
Constraints :
1 <= N <= 10^3
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4*/
int func(int arr[],int n,int data,int index,int ans[],int k=0){
    if(index==n)
     return k;
    if(arr[index]==data){
        ans[k]=index;
        return func(arr,n,data,index+1,ans,k+1); 
    }
    return func(arr,n,data,index+1,ans,k);
}

int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
    return func(input,size,x,0,output)+1;
}
