#include<bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  int first = 0;
  int first_index = 0;
  int second = 0;
  int second_index = -1;
  for (int i = 0; i < N; i++) {
    int T;
    cin >> S.at(i);
    cin >> T;

    if (T > first) {
      second = first;
      second_index = first_index;
      first = T;
      first_index = i;
    } else if (T > second) {
      second = T;
      second_index = i;
    }
  }
  cout << S.at(second_index) << endl;
  return 0;
}
