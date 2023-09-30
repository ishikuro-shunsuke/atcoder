#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = a; i < (int)(b); i++)
#define ALL(v) (v).begin(),(v).end()
const int INF = (int)1e9;
const ll LLINF = (ll)1e12;

int f(ll X) {
  int result = 0;
  while (X > 0) {
    result += X % 10;
    X /= 10;
  }
  return result;
}

int main() {
  ll N;
  cin >> N;
  cout << (N % f(N) == 0 ? "Yes" : "No") << endl;
  return 0;
}
// ATTEMPT: 2021/06/22 22:26:38
// ATTEMPT: 2021/06/22 22:27:33
// ATTEMPT: 2021/06/22 22:29:25
// ATTEMPT: 2021/06/22 22:29:33
