#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  bool abort = false;
  int count = 0;
  while (!abort) {
    for (int i = 0; i < N; i++) {
      if (A.at(i) % 2 == 0) {
        A.at(i) /= 2;
      } else {
        abort = true;
      }

      if (i == N - 1 && !abort) {
        count++;
      }
    }
  }
  cout << count << endl;
}

// STARTED: 2023/10/01 13:47:43
// SUBMITTED: 2023/10/01 13:53:15
