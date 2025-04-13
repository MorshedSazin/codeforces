// time-limit: 1000
// problem-url: https://codeforces.com/contest/2094/problem/B
#include <bits/stdc++.h>
using namespace std;
/*
 *            (\_/)
 *           ( •_•)
 *          / >**>
 */
void solution() {
  int n, m, l, r;
  cin >> n >> m >> l >> r;
  int a = 0, b = 0;
  for (int x = 0; x < m; x++) {
    if (a < r)
      a++;
    else
      b--;
  }
  cout << b << " " << a << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--)
    solution();
  return 0;
}
