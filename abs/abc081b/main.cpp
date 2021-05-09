#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<unsigned int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  int op = 0;
  while (true) {
    for (int i = 0; i < n; i++) {
      if (a.at(i) % 2 != 0) {
        cout << op << endl;
        return 0;
      }
      a.at(i) = a.at(i) / 2;
    }
    op++;
  }

  return 0;
}
