#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, K;
  cin >> N >> K;
  int result = 1;

  for (int i = 0; i < N; i++) {
    if (result * 2 < result + K) {
      result *= 2;
    } else {
      result += K;
    }
  }

  cout << result << endl;
}
// STARTED: 2023/09/30 09:27:03
// SUBMITTED: 2023/09/30 09:39:37
