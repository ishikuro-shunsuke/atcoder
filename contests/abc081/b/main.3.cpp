#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  int count = 1000000001;
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;

    int local_count = 0;
    for (int j = A; j % 2 == 0; j /= 2) {
      local_count++;
    }

    if (local_count < count) {
      count = local_count;
    }
  }

  cout << count << endl;
}

// STARTED: 2023/09/30 10:02:14
// SUBMITTED: 2023/09/30 10:12:57
