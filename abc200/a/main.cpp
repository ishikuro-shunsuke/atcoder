#include<bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  cout << (N % 100 == 0 ? N / 100 : N / 100 + 1) << endl;
  return 0;
}
