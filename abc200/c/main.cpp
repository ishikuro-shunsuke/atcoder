#include<bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  // TLE になる
  /*
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }

  int count = 0;
  for (int i = 0; i < N-1; i++) {
    for (int j = i+1; j < N; j++) {
      if (abs(a.at(i) - a.at(j)) % 200 == 0) {
        count++;
      }
    }
  }
  */

  // 公式解説。数学っぽく解く
  /*
  vector<unsigned long long> hist(200, 0);
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    hist.at(input % 200)++;
  }

  unsigned long long count = 0;
  for (int i = 0; i < 200; i++) {
    count += (hist.at(i) * (hist.at(i) - 1)) / 2;
  }*/

  // さらに別解
  // 一般的に、
  // (要素が加わるとき増える組み合わせの数) = (既にすでにある要素数)
  // であることを利用
  vector<long long> hist(200, 0);
  long long count = 0;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;
    count += hist.at(input%200)++;
  }
  cout << count << endl;
  return 0;
}
