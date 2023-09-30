#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = a; i < (int)(b); i++)
#define ALL(v) (v).begin(),(v).end()
const int INF = (int)1e9;
const ll LLINF = (ll)1e12;
const unsigned long long ULLINF = (unsigned long long)18446744073709551615;

unsigned long long numat(int p, int q) {
  int fact_pq = 1;
  FOR(j, 1, p+q+1) {
    fact_pq *= j;
  }
  int fact_p = 1;
  FOR(j, 1, p+1) {
    fact_p *= j;
  }
  int fact_q = 1;
  FOR(j, 1, q+1) {
    fact_q *= j;
  }
  return fact_pq / (fact_p + fact_q);
}

int main() {
  int A, B;
  unsigned long long K;
  cin >> A >> B >> K;

  int a, b;
  a = b = 0;
  string ans;
  unsigned long long cache = 0;
  REP(i, A+B) {
    unsigned long long center = numat(A-a-1, B-b);
    if (K < cache + center) {
      a++;
      ans += 'a';
    } else {
      b++;
      ans += 'b';
      cache += center;
    }
    K /= 2;
  }
  cout << ans << endl;
  return 0;
}
