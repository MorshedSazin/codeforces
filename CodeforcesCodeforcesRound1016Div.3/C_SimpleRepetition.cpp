// time-limit: 2000
// problem-url: https://codeforces.com/contest/2093/problem/e
#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 *            (\_/)
 *           ( •_•)
 *          / >**>
 */

bool isprime(int n) {
  if (n <= 1)
    return false;
  if (n == 2)
    return true;
  if (n % 2 == 0)
    return false;

  for (int i = 3; i <= std::sqrt(n); i += 2) {
    if (n % i == 0)
      return false;
  }
  return true;
}

void solution() {
  long long a, b;
  cin >> a >> b;
  string num = "";
  while (b) {
    num += to_string(a);
    --b;
  }
  a = stoi(num);
  isprime(a) ? cout << "YES" << endl : cout << "NO" << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solution();
  }
}
