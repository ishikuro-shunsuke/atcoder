#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  int current_t = 0;
  int current_x = 0;
  int current_y = 0;
  for (int i = 0; i < N; i++) {
    int t, x, y;
    cin >> t >> x >> y;

    int d_x = current_x - x;
    int abs_d_x;
    if (d_x >= 0) {
      abs_d_x = d_x;
    } else {
      abs_d_x = -d_x;
    }

    int d_y = current_y - y;
    int abs_d_y;
    if (d_y >= 0) {
      abs_d_y = d_y;
    } else {
      abs_d_y = -d_y;
    }

    int distance = abs_d_x + abs_d_y;
    int d_t = t - current_t;

    if (d_t < distance || d_t % distance % 2 != 0) {
      cout << "No" << endl;
      return 0;
    }
    current_x = x;
    current_y = y;
    current_t = t;
  }
  cout << "Yes" << endl;
}

// STARTED: 2023/10/01 15:45:31
// SUBMITTED: 2023/10/01 15:59:17
// SUBMITTED: 2023/10/01 16:03:15
// SUBMITTED: 2023/10/01 16:05:10
