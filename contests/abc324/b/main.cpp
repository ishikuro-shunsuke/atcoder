#include <bits/stdc++.h>
using namespace std;
int main() {
  uint64_t N;
  cin >> N;



  for (int x = 0; (uint64_t)pow(2, x) <= N; x++) {
    for (int y = 0; (uint64_t)(pow(2, x) * pow(3, y)) <= N; y++) {
      if ((uint64_t)(pow(2, x) * pow(3, y)) == N) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
}

// STARTED: 2023/10/14 21:08:27
// SUBMITTED: 2023/10/14 21:30:03
// SUBMITTED: 2023/10/14 21:43:10
// SUBMITTED: 2023/10/14 22:09:53
