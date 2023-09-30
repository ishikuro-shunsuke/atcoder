#include<bits/stdc++.h>
#include<cmath>
using namespace std;

// 汎用的だし実務ならこの実装にしたいが、タイプ量が多いので解説を真似る
/*
int pow(const int b, const int x) {
  if (x == 0) {
    return 1;
  }
  int result = 1;
  for (int i = 0; i < x; i++) {
    result *= b;
  }
  return result;
}

int f(const int X) {
  int result = 0;
  for (int i = 0; i < 8; i++) {
    result += X % pow(10, i+1) / pow(10, i);
  }
  return result;
}

int main() {
  int N;
  cin >> N;
  if (N % f(N) == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
*/

// 各桁を取り出す手法は頻出なので練習しておく

int f(int X) {
  int sum = 0;
  while (X > 0) {
    sum += X % 10;
    X /= 10;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;

  if (N % f(N) == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}