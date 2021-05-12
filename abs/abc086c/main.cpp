#include<bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> x(N+1), y(N+1), t(N+1);

  t.at(0) = x.at(0) = y.at(0) = 0;
  for (int i = 1; i <= N; i++) {
    cin >> t.at(i) >> x.at(i) >> y.at(i);
  }

  for (int i = N; i > 0; i--) {
    const int steps = t.at(i) - t.at(i-1);
    const int distance = abs(x.at(i) - x.at(i-1)) + abs(y.at(i) - y.at(i-1));
    if (steps < distance || steps % 2 != distance % 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}