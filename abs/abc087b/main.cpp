#include<bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  // 全通りをシミュレーションする方法

  int comb = 0;
  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      for (int k = 0; k <= c; k++) {
        if ((i * 500 + j * 100 + k * 50) == x) {
          comb++; 
        }
      }
    }
  }

  cout << comb << endl;
  return 0;
}
