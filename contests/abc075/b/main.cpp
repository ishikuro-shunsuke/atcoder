#include<bits/stdc++.h>
using namespace std;
int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S.at(i);
  }

  // 八方向すべてに条件を書いたがこれはスマートではないので解説をみた
  /*
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S.at(i).at(j) == '.') {
        int count = 0;
        if (i-1 >= 0 && j-1 >= 0 && S.at(i-1).at(j-1) == '#') {
          count++;
        }
        if (i-1 >= 0 && S.at(i-1).at(j) == '#') {
          count++;
        }
        if (i-1 >= 0 && j+1 < W && S.at(i-1).at(j+1) == '#') {
          count++;
        }
        if (j-1 >= 0 && S.at(i).at(j-1) == '#') {
          count++;
        }
        if (j+1 < W && S.at(i).at(j+1) == '#') {
          count++;
        }
        if (i+1 < H && j-1 >= 0 && S.at(i+1).at(j-1) == '#') {
          count++;
        }
        if (i+1 < H && S.at(i+1).at(j) == '#') {
          count++;
        }
        if (i+1 < H && j+1 < W && S.at(i+1).at(j+1) == '#') {
          count++;
        }
        cout << (char)('0' + count);
      } else {
        cout << '#';
      }
    }
    cout << endl;
  }*/

  vector<int> dx{1, 0, -1, 0, 1, -1, -1, 1};
  vector<int> dy{0, 1, 0, -1, 1, 1, -1, -1};
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S.at(i).at(j) == '.') {
        int count = 0;
        for (int d = 0; d < 8; d++) {
          const int ni = i + dy.at(d);
          const int nj = j + dx.at(d);
          if (0 <= ni && ni < H &&
              0 <= nj && nj < W &&
              S.at(ni).at(nj) == '#') {
            count++;
          }
        }
        cout << (char)('0' + count);
      } else {
        cout << '#';
      }
    }
    cout << endl;
  }
  return 0;
}
