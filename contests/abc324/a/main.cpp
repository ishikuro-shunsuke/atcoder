#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i : views::iota(0, N)) {
    cin >> A.at(i);
  }

  bool same = [=]() {
    for (int first = A.at(0); int a : A) {
      if (a != first) {
        return false;
      }
    }
    return true;
  }();

  cout << (same ? "Yes" : "No") << endl;
}

// STARTED: 2023/10/14 21:00:15
// SUBMITTED: 2023/10/14 21:07:56
