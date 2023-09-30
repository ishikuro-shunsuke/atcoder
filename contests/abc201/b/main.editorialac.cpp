#include<bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<pair<int, string>> ST(N);
  for (int i = 0; i < N; i++) {
    cin >> ST.at(i).second >> ST.at(i).first;
  }
  sort(ST.rbegin(), ST.rend());
  cout << ST.at(1).second << endl;
  return 0;
}
