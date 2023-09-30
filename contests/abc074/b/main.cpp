#include<bits/stdc++.h>
using namespace std;
int main() {
  int N, K;
  cin >> N >> K;
  int sum = 0;
  int x;
  for (int i = 0; i < N; i++) {
    cin >> x;
    if (x < K - x) {
      sum += x;
    } else {
      sum += K - x;
    }
  }
  cout << sum * 2 <<  endl;
  return 0;
}
