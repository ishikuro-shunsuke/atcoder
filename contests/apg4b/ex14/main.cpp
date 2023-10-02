#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  vector<int> heights = { A, B, C };
  sort(heights.begin(), heights.end());
  cout << heights.at(2) - heights.at(0) << endl;
}

// STARTED: 2023/10/01 11:52:07
// SUBMITTED: 2023/10/01 12:43:34
