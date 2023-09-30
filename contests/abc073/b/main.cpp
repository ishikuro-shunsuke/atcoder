#include<bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  int l, r;
  int occupied = 0;
  for (int i = 0; i < N; i++) {
    cin >> l >> r;
    occupied += r - l + 1;
  }
  cout << occupied << endl;
  return 0;
}
