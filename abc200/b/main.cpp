#include<bits/stdc++.h>
using namespace std;
int main() {
  long int N, K;
  cin >> N >> K;
  for (int i = 0; i < K; i++) {
    N = N % 200 == 0 ? N / 200 : N * 1000 + 200;
  }
  cout << N << endl;
  return 0;
}
