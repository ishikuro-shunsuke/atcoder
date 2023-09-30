#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;

  vector<int> city(N);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    city.at(a - 1) += 1;
    city.at(b - 1) += 1;
  }

  for (int i = 0; i < N; i++) {
    cout << city.at(i) << endl;
  }
}

// STARTED: 2023/09/30 22:51:18
// SUBMITTED: 2023/09/30 23:05:19
