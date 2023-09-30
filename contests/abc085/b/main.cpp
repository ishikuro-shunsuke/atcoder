#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> d(N);

  int count = 0;
  for (int i = 0; i < N; i++) {
    cin >> d.at(i);

    bool duplicated = false;
    for (int j = 0; j < i; j++) {
      if (d.at(i) == d.at(j)) {
        duplicated = true;
      }
    }

    if (!duplicated) {
      count++;
    }
  }

  cout << count << endl;
}

// STARTED: 2023/10/01 00:48:53
// SUBMITTED: 2023/10/01 00:54:31
