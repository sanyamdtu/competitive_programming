#include <bits/stdc++.h>
#define long ll;
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int maval = 0, score = 0, current_val = 0, overall_ = 0, overall_maval = 0;
    for (int i = 0; i < N; i++)
    {
        overall_ = overall_ + a[i];
        current_val = current_val + a[i];
        if (maval < a[i])
        {
            current_val -= a[i];
            current_val += maval;
            maval = max(maval, a[i]);
            if (overall_ > 0 && overall_maval <= maval)
                current_val = overall_ - a[i];
        }
        //cout << "curr " << current_val << " oa " << overall_ << " ";
        if (current_val < 0)
        {
            current_val = 0, maval = 0;
        }
        if (overall_ <= 0)
        {
            overall_ = 0, overall_maval = 0;
        }
        score = max(score, current_val);
        if (overall_maval < a[i])
        {
            overall_maval = a[i];
        }
    }
    if (score < 0)
        score = 0;
    cout << score << endl;
}