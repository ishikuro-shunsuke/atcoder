#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = a; i < (int)(b); i++)
#define ALL(v) (v).begin(),(v).end()
const int INF = (int)1e9;
const ll LLINF = (ll)1e12;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0 ,-1};

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  vector<string> S(H);
  REP(i, H) cin >> S.at(i);

  int count = 1;
  REP(i, 4) {
    int x = X;
    int y = Y;
    while (0 < x + dx[i] && x + dx[i] <= H &&
           0 < y + dy[i] && y + dy[i] <= W &&
           (S.at(x + dx[i] - 1))[y + dy[i] - 1] == '.') {
      x += dx[i];
      y += dy[i];
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
// ATTEMPT: 2021/05/17 15:32:20
