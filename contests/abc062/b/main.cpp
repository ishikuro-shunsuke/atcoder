#include <bits/stdc++.h>
using namespace std;
int main() {
  int H, W;
  cin >> H >> W;

  for (int i = 0; i < W + 2; i++) {
    cout << '#';
  }
  cout << endl;

  for (int i = 0; i < H; i++) {
    string line;
    cin >> line;
    cout << '#' << line << '#' << endl;
  }

  for (int i = 0; i < W + 2; i++) {
    cout << '#';
  }
  cout << endl;
}

// STARTED: 2023/09/30 22:42:09
// SUBMITTED: 2023/09/30 22:48:48
