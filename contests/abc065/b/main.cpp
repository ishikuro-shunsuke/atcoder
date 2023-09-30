#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  vector<int> buttons(N);
  for (int i = 0; i < N; i++) {
    int next;
    cin >> next;
    buttons.at(i) = next - 1;
  }

  int count = -1;
  int next = buttons.at(0);
  for (int i = 1; i < N; i++) {
    if (next == 1) {
      count = i;
      break;
    }
    next = buttons.at(next);
  }

  cout << count << endl;
}

// STARTED: 2023/09/30 23:06:18
// SUBMITTED: 2023/09/30 23:36:25
// SUBMITTED: 2023/09/30 23:43:23
// SUBMITTED: 2023/09/30 23:52:42
