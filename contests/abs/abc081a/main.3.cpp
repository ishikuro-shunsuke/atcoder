#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = a; i < (int)(b); i++)
#define ALL(v) (v).begin(),(v).end()
const int INF = (int)1e9;
const ll LLINF = (ll)1e12;

int main() {
  int s;
  cin >> s;
  int result = 0;
  while (s > 0) {
    result += s % 10;
    s /= 10;
  }
  cout << result << endl;
  return 0;
}

// STARTED: 2021/06/22 23:06:18
// ATTEMPT: 2021/06/22 23:08:27
