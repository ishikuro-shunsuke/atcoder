#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    sum += A.at(i);
  }

  int avg = sum / N;
  for (int i = 0; i < N; i++) {
    int sub = avg - A.at(i);
    if (sub >= 0) {
      cout << sub << endl;
    } else {
      cout << -sub << endl;
    }
  }
}

// STARTED: 2023/09/30 22:30:55
// SUBMITTED: 2023/09/30 22:40:17
