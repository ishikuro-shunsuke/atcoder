#include<bits/stdc++.h>
using namespace std;
int main() {
  int N, Y;
  cin >> N >> Y;
  for (int x = 0; x <= N; x++) {
    for (int y = 0; y <= N-x; y++) {
      for (int z = 0; z <= N-x-y; z++) {
        // 解説によればこのループは不要で、z = N - x - y とするだけで分かるとのこと
        if (x * 10000 + y * 5000 + z * 1000 == Y &&  x + y + z == N) {
          cout << x << " " << y << " " << z << endl;
          return 0;
        }
      }
    }
  } 
  cout << "-1 -1 -1" << endl;
  return 0;
}
