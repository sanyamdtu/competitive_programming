#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn for (int i = 0; i < n; i++)
#define pb(x) push_back(x)

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        float c, h, t;
        cin >> h >> c >> t;
        float ans = h, prev = h, flag = 1, currmove = h, next_move = c, count = 0;
        float moves = 0;
        if (t <= (h + c) / 2)
            moves = 2;
        else
        {
            while (flag > 0)
            {
                ans = (currmove) / (count + 1);
                count++;
                if ((ans <= t || ans >= prev && count != 1) && currmove == h)
                {
                    flag = 0;
                    break;
                }
                else if (currmove == h)
                    prev = ans;
                swap(next_move, currmove);
            }
            float diff_ans = abs(ans - t), diff_prev = abs(prev - t);
            //cout << diff_ans << " " << diff_prev;
            (diff_ans >= diff_prev) ? moves = count - 2 : moves = count;
        }
        if (moves < 0)
            moves += 2;
        cout << moves << endl;
    }
}