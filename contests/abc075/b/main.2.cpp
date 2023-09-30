#include <bits/stdc++.h>
using namespace std;
int main() {
  int H, W;
  string S = "";
  cin >> H >> W;
  for (int i = 0; i < H; i++) {
    string line;
    cin >> line;
    S += line;
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S.at(i * W + j) == '#') {
        cout << '#';
      } else {
        int count = 0;
        if (i > 0 && j > 0 && S.at((i - 1) * W + (j - 1)) == '#') {
          count++;
        }
        if (i > 0 && S.at((i - 1) * W + j) == '#') {
          count++;
        }
        if (i > 0 && j + 1 < W && S.at((i - 1) * W + (j + 1)) == '#') {
          count++;
        }
        if (j > 0 && S.at(i * W + (j - 1)) == '#') {
          count++;
        }
        if (j + 1 < W && S.at(i * W + (j + 1)) == '#') {
          count++;
        }
        if (i + 1 < H && j > 0 && S.at((i + 1) * W + (j - 1)) == '#') {
          count++;
        }
        if (i + 1 < H && S.at((i + 1) * W + j) == '#') {
          count++;
        }
        if (i + 1 < H && j + 1 < W && S.at((i + 1) * W + (j + 1)) == '#') {
          count++;
        }

        cout << count;
      }
    }
    cout << endl;
  }
}

// STARTED: 2023/09/30 21:30:01
// SUBMITTED: 2023/09/30 21:57:58
