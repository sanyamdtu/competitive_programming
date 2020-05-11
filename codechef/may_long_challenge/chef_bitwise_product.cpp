#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < n; i++)
  typedef long long ll;
int countBits(ll num) {
  int count = 0;
  while (num) {
    count++;
    num >>= 1;
  }
  return count;
}
int main() {
  int t;
  cin >> t;
  forn(i, t) {
    ll x, y, ans, l, r;
    cin >> x >> y >> l >> r;
    if (x == 0 || y == 0 || r==0)
      ans = 0;
    else
      ans = x | y;
    if (ans > r) {
      vector < ll > answers;
      int bits_in_ans = countBits(ans), bits_in_r = countBits(r);
      ll mask = (1 << bits_in_r) - 1;
      ans &= mask;
      bitset < 64 > ans_bitset(ans), r_bit_set(r);
      int flag = 0; //for 0 means ans_is_greataer than r
      for (int i = ans_bitset.size() - 1; i >= 0; i--) {
        if (ans_bitset[i] != r_bit_set[i]) {
          if (ans_bitset[i] == 1 && flag == 0) {
            ans_bitset[i] = 0;
          } else if (ans_bitset[i] == 0)
            flag = 1;
        }
      }
      bitset < 64 > ans_bitset_remastered(ans); 
      for (int i = ans_bitset_remastered.size() ; i >= 0; i--) {
        // if (ans_bitset_remastered[i] != r_bit_set[i])
          if (ans_bitset_remastered[i] == 1) {
            ans_bitset_remastered[i] = 0;
            bitset < 64 > ans_bitset_remastered_temp;
            ans_bitset_remastered_temp = ans_bitset_remastered;
            flag = 0;
            for (int j = i - 1; j >= 0 && ans_bitset_remastered_temp.to_ullong()>r; j--) {
              if (ans_bitset_remastered_temp[j] != r_bit_set[j]) {
                if (ans_bitset_remastered_temp[j] == 1 && flag == 0) {
                  ans_bitset_remastered_temp[j] = 0;
                } else if (ans_bitset_remastered_temp[j] == 0)
                  flag = 1;
              }
            }
            
           if(ans_bitset_remastered_temp.to_ullong()<=r)
            {
              answers.push_back(ans_bitset_remastered_temp.to_ullong());
            }
            ans_bitset_remastered[i] = 1;
          }
      }
      ans = 0;
      ll ans_1 = ans_bitset.to_ullong();
      forn(i, answers.size()) {
        if ((x & ans) * (y & ans) < (x & answers[i]) * (y & answers[i])) {
          ans = answers[i];
        } else if ((x & ans) * (y & ans) == (x & answers[i]) * (y & answers[i])) {
          ans = min(ans, answers[i]);
        }
      }
      if ((x & ans) * (y & ans) < (x & ans_1) * (y & ans_1))
        ans = ans_1;
      else if ((x & ans) * (y & ans) == (x & ans_1) * (y & ans_1))
        ans = min(ans, ans_1);
    }
    if ((x & ans) * (y & ans) == 0)
      ans = 0;
    cout << ans << endl;
    
  }
}