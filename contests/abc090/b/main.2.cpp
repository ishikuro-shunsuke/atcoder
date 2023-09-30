#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B;
  cin >> A >> B;
  int result = 0;

  for (int i = A; i <= B; i++) {
    if (i / 10000 == i % 10 && i % 10000 / 1000 == i % 100 / 10) {
      result++;
    }
  }

  cout << result << endl;
}

// STARTED: 2023/09/30 09:56:16
// SUBMITTED: 2023/09/30 10:01:35
