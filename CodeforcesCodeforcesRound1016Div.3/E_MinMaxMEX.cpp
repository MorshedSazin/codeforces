// time-limit: 2000
// problem-url: https://codeforces.com/contest/2093/problem/E
#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 *            (\_/)
 *           ( •_•)
 *          / >**>
 */

void solution() {
  long long a, b;
  cin >> a >> b;
  string num = "";
  while (b) {
    num += to_string(a);
  }
  a = stoi(num);
  cout << a << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solution();
  return 0;
}
