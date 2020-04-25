#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, flag = 0; //for checking if null point is reached
    cin >> n;
    int x[n], a[n], b[n];
    string xs;
    cin>>xs;
    for (int i = 0; i < n; i++)
     x[i]=xs[i]-'0';
    for (int i = 0; i < n; i++) {
      if (x[i] == 2) {
        if (flag==1) {
          a[i] = 0;
          b[i] = 2;
        } else {
          a[i] = 1;
          b[i] = 1;
        }

      } else if (x[i] == 1) {
        if (flag) {
          a[i] = 0;
          b[i] = 1;
        } else {
          a[i] = 1;
          b[i] = 0;
          flag = 1;
        }
      } else {
        a[i] = 0;
        b[i] = 0;
      }
    }
    for (int i = 0; i < n; i++)
      cout << a[i];
    cout << endl;
    for (int i = 0; i < n; i++)
      cout << b[i];
    cout << endl<<endl;
  }
  return 0;
}