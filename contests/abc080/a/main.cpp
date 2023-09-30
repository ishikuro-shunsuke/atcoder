#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, A, B;
  cin >> N >> A >> B;
  if (N * A < B) {
    cout << N * A << endl;
  } else {
    cout << B << endl;
  }
}
// STARTED : 2023/09/30 08:20:21
// PASSED : 2023/09/30 08:22:24
