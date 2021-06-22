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
  vector<ll> v(100001);
  FOR(i, 1, N+1) {
    int a;
    cin >> a;
    v.at(a)++;
  }
  vector<int> B(N+1);
  FOR(i, 1, N+1) {
    cin >> B.at(i);
  }
  ll count = 0;
  FOR(i, 1, N+1) {
    int c;
    cin >> c;
    count += v.at(B.at(c));
  }

  cout << count << endl;
  return 0;

}
// ATTEMPT: 2021/05/22 21:22:21
// ATTEMPT: 2021/05/22 21:49:09
// ATTEMPT: 2021/05/22 21:51:31
// ATTEMPT: 2021/05/22 21:52:03
// ATTEMPT: 2021/05/22 21:58:05
