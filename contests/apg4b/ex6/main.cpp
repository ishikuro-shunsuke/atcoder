#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;
 
  if (op == "+") {
    cout << A + B << endl;
  } else if (op == "-") {
    cout << A - B << endl;
  } else if (op == "*") {
    cout << A * B << endl;
  } else if (op == "/" && B != 0) {
      cout << A / B << endl;
  } else {
    cout << "error" << endl;
  }
}
// STARTED : 2023/09/30 08:08:20
// PASSED : 2023/09/30 08:11:09
