#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  int f_X = 0;
  int tmp = N;
  while (tmp > 0) {
    f_X += tmp % 10;
    tmp /= 10;
  }

  if (N % f_X == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
// STARTED: 2023/09/30 09:20:19
// SUBMITTED: 2023/09/30 09:26:15
