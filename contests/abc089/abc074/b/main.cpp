#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, K;
  cin >> N >> K;

  int sum = 0;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;

    if (x * 2 < K) {
      sum += x * 2;
    } else {
      if (x < K) {
        sum += (K - x) * 2;
      } else {
        sum += (x - K) * 2;
      }
    }
  }

  cout << sum << endl;
}
// STARTED: 2023/09/30 09:40:20
// SUBMITTED: 2023/09/30 09:55:02
// SUBMITTED: 2023/09/30 09:55:20
