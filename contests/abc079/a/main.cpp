#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  int digit1 = N / 1000;
  int digit2 = N % 1000 / 100;
  int digit3 = N % 100 / 10;
  int digit4 = N % 10;
  if ((digit1 == digit2 && digit2 == digit3) || (digit2 == digit3 && digit3 == digit4)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
// STARTED: 2023/09/30 08:24:16
// SUBMITTED: 2023/09/30 08:29:22
