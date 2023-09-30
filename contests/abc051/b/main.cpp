#include<bits/stdc++.h>
using namespace std;
int main() {
  int K, S;
  cin >> K >> S;

  int count = 0;
  for (int X = 0; X <= K; X++) {
    for (int Y = 0; Y <= K; Y++) {
      /* TLE になる
      for (int Z = 0; Z <= K; Z++) {
        if (X + Y + Z == S) {
          count++;
        }
      }
      */
      // Z == Ｓ - X - Y なので Z のループは省略可能
      int Z = S - X - Y;
      if (0 <= Z && Z <= K) {
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}
