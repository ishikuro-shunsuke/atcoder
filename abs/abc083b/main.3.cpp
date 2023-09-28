#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = a; i < (int)(b); i++)
#define ALL(v) (v).begin(),(v).end()
const int INF = (int)1e9;
const ll LLINF = (ll)1e12;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int result = 0;
  FOR(i, 1, N+1) {
    int c = i;
    int sum = 0;
    while (c > 0) {
      sum += c % 10;
      c /= 10;
    }
    if (A <= sum && sum <= B) {
      result += i;
    }
  }
  cout << result << endl;
  return 0;
}

// STARTED: 2021/06/22 23:18:33
// ATTEMPT: 2021/06/22 23:23:23
