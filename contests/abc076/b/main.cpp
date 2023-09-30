#include<bits/stdc++.h>
using namespace std;
int main() {
  int x = 1;
  int N, K;
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    if (x * 2 < x + K) {
      x *= 2;
    } else {
      x += K;
    }
  }
  cout << x << endl;
  return 0;
}
