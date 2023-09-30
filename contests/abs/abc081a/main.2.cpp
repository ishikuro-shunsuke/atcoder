#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int s;
  cin >> s;

  int m = 0;
  rep(i,3) {
    m += s % 10;
    s /= 10;
  }
  cout << m << endl;
  return 0;
}


// PASSED: 2021/05/16 22:33:52
