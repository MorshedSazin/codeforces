// time-limit: 2000
// problem-url: https://codeforces.com/contest/2093/problem/F
/*
           B I S M I L L A H I R  R A H M A N I R  R A H I M
    IUBAT - International University of Business Agriculture and Technology
            Department of Computer Science and Engineering
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define sf(n) scanf("%d", &n)
#define s2(n) scanf("%lld", &n)
#define s3(n, m, o) scanf("%d%d%d", &n, &m, &o)
#define s4l(n, m, i, j) scanf("%lld %lld %lld %lld", &n, &m, &i, &j)
#define pnt(n) printf("%d\n", n)
#define pntll(n) printf("%lld\n", n)
#define pntu(n) printf("%llu\n", n)
//__gcd(arr[i], arr[j])
// partition(arr.begin(), arr.end(), [](int x) { return x % 2 == 0; });

#include <bits/stdc++.h>
using namespace std;

/*
 *            (\_/)
 *           ( •_•)
 *          / >**>
 */

void solution() {
  int a,b;
  cin >> a >> b;
  if (a == b && a && b != 1)
    cout << 0 << endl;
  else if (a == 1 && b == 1)
    cout << 1 << endl;
  else if (a >= 1 && b > a) {
    cout << b - a << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solution();
  return 0;
}
