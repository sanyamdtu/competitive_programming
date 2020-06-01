/*
Prime Xor - Problem
Send Feedback
Penny has an array of n integers, a[0], a[1],....,a[n-1]. She wants to find the 
number of unique multisets she can form using elements from the array such that the
bitwise XOR of all the elements of the multiset is a prime number. Recall that a
multiset is a set which can contain duplicate elements.
Given q queries where each query consists of an array of integers, can you help Penny
find and print the number of valid multisets for each array? As these values can be 
quite large, modulo each answer by 10^9+7 before printing it on a new line.
Input Format
The first line contains a single integer, q , denoting the number of queries. The 
subsequent lines describe each query in the following format:

1) The first line contains a single integer, n, denoting the number of integers 
in the array.
2) The second line contains n space-separated integers describing the respective 
values of a[0], a[1],...., a[n-1].
Constraints
1 <= q <= 10
1 <= n <= 100000
3500 <= a[i] <= 4500
Output Format
On a new line for each query, print a single integer denoting the number of unique 
multisets Penny can construct using numbers from the array such that the bitwise XOR
of all the multiset's elements is prime. As this value is quite large, your answer 
must be modulo 10^9+7.
Sample Input
1   
3   
3511 3671 4153 
Sample Output
4
*/
#include <bits/stdc++.h>
using namespace std;
#define max 10000
#define mod 1000000007
int sieve[max];
int main()
{
    for (int i = 0; i < max; i++)
        sieve[i] = 1;
    sieve[0] = 0;
    sieve[1] = 0;
    for (long long i = 2; i < max; i++)
        if (sieve[i] != 0)
            for (long long j = i * i; j < max; j += i)
                sieve[j] = 0;
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        int arr[n], count = 0, freq[5000];
        memset(freq, 0, sizeof(freq));
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
    }
}