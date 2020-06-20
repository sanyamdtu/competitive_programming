#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll a, b, n;
		cin >> a >> b >> n; // a is greater
		int count = 0;
		if (a < b)
			swap(a, b);
		while (a <= n && b <= n)
		{
			count++;
			b += a;
			if (a < b)
				swap(a, b);
			// cout << a << " " << b << endl;
		}
		cout << count << endl;
	}
}