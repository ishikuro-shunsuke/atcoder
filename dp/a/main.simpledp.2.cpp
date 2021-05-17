#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#define INF 100000

int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  rep(i, N) {
    cin >> h.at(i);
  }

  vector<int> dp(N, INF);
  dp.at(0) = 0;
  for (int i = 1; i < N; i++) {
    dp.at(i) = min(dp.at(i-1) + abs(h.at(i) - h.at(i-1)),
                   i == 1 ? INF :
                   dp.at(i-2) + abs(h.at(i) - h.at(i-2)));
  }
  cout << dp.back() << endl;
  return 0;
}

// STARTED: 2021/05/16 23:08:34
// PASSED : 2021/05/16 23:20:09
