#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int total = 0;
  for (int i = 1; i <= N; i++) {
    int mask = 10000;
    int digit_sum = 0;
    while (mask > 0) {
      digit_sum += i % (mask * 10) / mask;
      mask /= 10;
    }
    if (A <= digit_sum && digit_sum <= B) {
      total += i;
    }
  }
  cout << total << endl;
}

// STARTED: 2023/10/01 14:27:17
// SUBMITTED: 2023/10/01 14:39:54
// SUBMITTED: 2023/10/01 14:42:02
