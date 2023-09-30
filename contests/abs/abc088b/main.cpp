#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  sort(a.begin(), a.end(), [](const int& i, const int& j) { return i > j; });
  // 解説によれば greeter<int>() を使えばいいらしい
  
  int game = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      game += a.at(i);
    } else {
      game -= a.at(i);
    }
  }

  cout << game << endl;
  return 0;
}
