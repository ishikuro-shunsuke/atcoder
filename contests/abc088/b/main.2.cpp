#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  int Alice = 0;
  int Bob = 0;
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      Alice += a.at(i);
    } else {
      Bob += a.at(i);
    }
  }
  cout << Alice - Bob << endl;
}

// STARTED: 2023/10/01 13:18:52
// SUBMITTED: 2023/10/01 13:22:32
