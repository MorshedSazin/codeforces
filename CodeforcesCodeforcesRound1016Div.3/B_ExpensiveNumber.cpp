#include <bits/stdc++.h>
using namespace std;

/*
 *            (\_/)
 *           ( •_•)<F9>
 *          / >**>
 */

void solution() {
  string a;
  cin >> a;
  int count = 0, zeroCount = 0;
  int i = 0;
  for (i; i < a.length(); ++i) {
    if (a[i] != '0') {
      count = max(count, zeroCount + 1);
    } else {
      zeroCount++;
    }
  }
  cout << a.size() - count << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solution();
  return 0;
}
