#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  int x = N;
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  cout << (N % sum == 0 ? "Yes" : "No") << endl;
  return 0;
}
