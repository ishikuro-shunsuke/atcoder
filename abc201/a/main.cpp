#include<bits/stdc++.h>
using namespace std;
int main() {
  vector<int> A(3);
  for (int i = 0; i < 3; i++) {
    cin >> A.at(i);
  }
  sort(A.begin(), A.end());
  cout << (abs(A.at(0) - A.at(1)) == abs(A.at(1) - A.at(2)) ? "Yes" : "No") << endl;

  return 0;
}
