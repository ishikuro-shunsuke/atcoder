#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }
 
  int count = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (A.at(i) + P.at(j) == S) {
        count++;
      }
    }
  }
  cout << count << endl;
}

// STARTED: 2023/10/01 19:06:19
// SUBMITTED: 2023/10/01 19:08:42