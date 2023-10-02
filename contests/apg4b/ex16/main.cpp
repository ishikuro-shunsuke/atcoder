#include <bits/stdc++.h>
#include <ranges>
using namespace std;
int main() {
  vector<int> data(5);

  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
 
  for (auto i: views::iota(0 ,4)) {
    if (data.at(i) == data.at(i + 1)) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}

// STARTED: 2023/10/01 18:56:38
// SUBMITTED: 2023/10/01 19:02:53
