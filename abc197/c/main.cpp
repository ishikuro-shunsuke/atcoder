#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = a; i < (int)(b); i++)
#define ALL(v) (v).begin(),(v).end()
const int INF = (int)1e9;
const ll LLINF = (ll)1e12;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  REP(i, N) cin >> A.at(i);

  ll minimum = LLINF;
  FOR(bit, 0, (1 << (N - 1))) {
    ll xor_result = 0;
    ll or_result = 0;
    REP(i, N) {
      or_result |= A.at(i);
      if (bit & (1 << i) || i == N-1) {
        xor_result ^= or_result;
        or_result = 0;
      }
    }
    minimum = min(minimum, xor_result);
  }
  cout << minimum << endl;
  return 0;
}
// ATTEMPT: 2021/05/17 16:04:23
// ATTEMPT: 2021/05/17 16:05:33
// ATTEMPT: 2021/05/17 16:08:08
// ATTEMPT: 2021/05/17 16:08:38
