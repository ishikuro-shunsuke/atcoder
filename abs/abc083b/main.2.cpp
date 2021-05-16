#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int sum = 0;
  for (int n = 1; n <= N; n++) {
    int m = n;
    int s = 0;
    while (m > 0) {
      s += m % 10;
      m /= 10;
    }
    if (A <= s && s <= B) {
      sum += n;
    }
  }
  cout << sum << endl;
  return 0;
}

// STARTED: 2021/05/16 22:35:52
// PASSED : 2021/05/16 22:44:39
