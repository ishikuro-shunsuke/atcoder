#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = a; i < (int)(b); i++)
#define ALL(v) (v).begin(),(v).end()
const int INF = (int)1e9;
const ll LLINF = (ll)1e12;

int main() {
  string S;
  cin >> S;
  cout << S.substr(1, 2) + S[0] << endl;
  return 0;
}
// ATTEMPT: 2021/05/17 14:52:53
