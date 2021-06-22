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
  REP(i, S.size()) {
    if (S[i] == '6') {
      S[i] = '9';
    } else if (S[i] == '9') {
      S[i] = '6';
    } 
  }
  reverse(S.begin(), S.end());
  cout << S << endl;
  return 0;
}
// ATTEMPT: 2021/05/22 21:11:14
// ATTEMPT: 2021/05/22 21:11:23
