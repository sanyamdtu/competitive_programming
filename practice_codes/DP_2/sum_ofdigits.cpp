/*
Sum of Digits
Send Feedback
Tourist is a 3rd-grade elementary student and quite well in mathematics. Once,
Tourist's teacher asked him to calculate the sum of numbers 1 through n.
Tourist quickly answered, and his teacher made him another challenge. He asked 
Tourist to calculate the sum of the digits of numbers 1 through n.
Tourist did finally find the solution. Now it is your turn, can you find a solution?
Input
Two space-separated integers 0 <= a <= b <= 10^9.

Program terminates if a and b are -1.
Output
The sum of the digits of numbers a through b.
Sample Input
1 10
100 777
-1 -1
Sample Output
46
8655
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll rev(ll num)
{
    ll temp = 0;
    while (num)
    {
        temp = temp * 10 + num % 10;
        num = num / 10;
    }
    return temp;
}
ll sum(ll n, ll rev)
{
    ll s = 0, num = n;
    cout << n << " ";
    while ((num / 10) > 0)
    {
        //cout << "opop";
        s = s * 10;
        s += 45;
        num = num / 10;
    }
    cout << s << " ";
    ll yes = 0;
    while (rev)
    {
        yes = ((rev % 10) * (rev % 10 - 1)) / 2 + yes * 10;
        rev /= 10;
    }
    ll no = 0, p = 1;
    while (n)
    {
        no += (n % 10) * p;
        p = p * (n % 10);
        n /= 10;
    }
    return yes + no + s;
}
int main()
{
    while (1)
    {
        ll a, b;
        cin >> a >> b;
        if (a == -1 && b == -1)
            break;
        //b = rev(b);
        //ll sum1 = sum(a, rev(a));
        ll sum2 = sum(b, rev(b));
        cout << sum2 << endl;
    }
}