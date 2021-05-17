#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = a; i < (int)(b); i++)
#define ALL(v) (v).begin(),(v).end()
const int INF = (int)1e9;
const ll LLINF = (ll)1e12;

template<class T> bool chmin(T &a, const T b) { if (b < a) { a = b; return true; } return false; }

int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  REP(i, N) cin >> h.at(i);

  vector<ll> dp(N, LLINF);
  dp.at(0) = 0;
  
  REP(i, N) {
    if (i+1 < N) {
      chmin(dp.at(i+1), dp.at(i) + abs(h.at(i) - h.at(i+1)));
    }
    if (i+2 < N) {
      chmin(dp.at(i+2), dp.at(i) + abs(h.at(i) - h.at(i+2)));
    }
  }
  cout << dp.back() << endl;
  return 0;
}

// STARTED: 2021/05/17 09:34:02
// ATTEMPT: 2021/05/17 09:41:32
