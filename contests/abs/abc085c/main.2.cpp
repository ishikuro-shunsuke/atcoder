#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, Y;
  cin >> N >> Y;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N - i; j++) {
      for (int k = 0; k <= N - i - j; k++) {
        if (i + j + k == N && i * 10000 + j * 5000 + k * 1000 == Y) {
          cout << i << " " << j << " " << k << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;
}

// STARTED: 2023/10/01 14:54:04
