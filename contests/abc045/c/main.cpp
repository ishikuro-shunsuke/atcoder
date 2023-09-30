#include<bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;

  long sum = 0;
  for (int bit = 0; bit < (1 << S.size() - 1); bit++) {
    long s = 0;
    for (int i = 0; i < S.size(); i++) {
      s += S.at(i) - '0';
      if (bit & (1 << i) || i == S.size() - 1) {
        sum += s;
        s = 0;
      } else {
        s *= 10;
      }
    }
  }
  cout << sum << endl;
  return 0;
}
