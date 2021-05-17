#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = a; i < (int)(b); i++)
#define ALL(v) (v).begin(),(v).end()
#define INF (int)1e9
#define LLINF (ll)1e12

template<class T> bool chmin(T &a, const T b) { if (b < a) { a = b; return true; } return false; }

int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  REP(i, N) cin >> h.at(i);

  vector<ll> dp(N, LLINF);
  dp.at(0) = 0;

  FOR(i, 1, N) {
    chmin(dp.at(i), dp.at(i-1) + abs(h.at(i) - h.at(i-1)));
    if (i > 1) {
      chmin(dp.at(i), dp.at(i-2) + abs(h.at(i) - h.at(i-2)));
    }
  }

  cout << dp.back() << endl;
  return 0;
}

// STARTED: 2021/05/17 09:21:22
// PASSED : 2021/05/17 09:26:57
