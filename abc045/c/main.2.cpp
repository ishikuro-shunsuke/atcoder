#include<bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;

  long sum = 0;
  long lastBit = 1 << S.size() - 1;
  for (int bit = 0; bit < lastBit; bit++) {
    long s = 0;
    for (int i = 0; i < S.size(); i++) {
      s += S.at(i) - '0';
      if ((bit + lastBit) & (1 << i)) {
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
