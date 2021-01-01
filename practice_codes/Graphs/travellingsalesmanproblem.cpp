#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mod 1000000007
#define INF 1e18
typedef long long ll;
int dist[10][10] = {
	{0, 20, 42, 25},
	{20, 0, 30, 34},
	{42, 30, 0, 10},
	{25, 34, 10, 0}};

int n = 4;
int visited = (1 << n) - 1;

int tps(int mask, int idx)
{
	if (mask == visited)
		return dist[idx][0];
	int ans = INT_MAX;
	for (int i = 1; i < n; ++i)
	{
		if ((mask & (1 << i)) == 0)
		{
			int newans = dist[idx][i] + tps(mask | (1 << i), i);

			ans = min(ans, newans);
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout << tps(1, 0);
	return 0;
}