    /*
    Kth largest element
    Send Feedback
    Given an array A of random integers and an integer k, find and return the kth largest element in the array.
    Try to do this question in less than O(nlogn) time.
    Input Format :
    Line 1 : An integer N i.e. size of the array
    Line 2 : N integers which are elements of the array, separated by spaces
    Line 3 : An integer k
    Output Format :
    kth largest element
    Input Constraints :
    1 <= N, Ai, k <= 10^5
    Sample Input 1 :
    6
    9 4 8 7 11 3
    2
    Sample Output 1 :
    9
    Sample Input 2 :
    8
    2 6 10 11 13 4 1 20
    4
    Sample Output 2 :
    10

    */

    #include<bits/stdc++.h>
    using namespace std;
    int kthLargest (vector<int> arr, int n, int k){
        /* Don't write main().
        * Don't read input, it is passed as function argument.
        * Return output and don't print it.
        * Taking input and printing output is handled automatically.
        */

        int *ans=new int[100000];
        memset(ans,0,sizeof(ans));
        for(int i=0;i<n;i++){
            ans[arr[i]]++;
        }   
        for(int i=100000;i>0;i--){
            if(ans[i]){
                if(k==1)
                return i;
                k--;
                ans[i]--;
                if(ans[i])
                 i++;
            }
        }
        
    }
