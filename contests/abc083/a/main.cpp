#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int L = A + B;
  int R = C + D;
  
  if (L > R) {
    cout << "Left" << endl;
  } else if (L < R) {
    cout << "Right" << endl;
  } else {
    cout << "Balanced" << endl;
  }
}
// STARTED : 2023/09/30 08:17:11
// PASSED : 2023/09/30 08:19:36
