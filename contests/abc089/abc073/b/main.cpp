#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  int sum = 0;
  for (int i = 0; i < N; i++) {
    int l, r;
    cin >> l >> r;
    sum += r + 1 - l;
  }
  cout << sum << endl;
}
// STARTED: 2023/09/30 09:15:12
// SUBMITTED: 2023/09/30 09:19:25
