#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int count = 0;
  for (int i = 0; i <= A; i++) {
    for (int j = 0; j <= B; j++) {
      for (int k = 0; k <= C; k++) {
        if (X == 500 * i + 100 * j + 50 * k) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
}

// STARTED: 2023/10/01 14:14:43
// SUBMITTED: 2023/10/01 14:25:42
