#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<string> s(N);
  for (int i = 0; i < N; i++) {
    cin >> s.at(i);
  }

  int M;
  cin >> M;
  vector<string> t(M);
  for (int i = 0; i < M; i++) {
    cin >> t.at(i);
  }

  int max = 0;
  for (int i = 0; i < N; i++) {
    int count = 0;

    for (int j = 0; j < N; j++) {
      if (s.at(i) == s.at(j)) {
        count++;
      } 
    }

    for (int j = 0; j < M; j++) {
      if (s.at(i) == t.at(j)) {
        count--;
      } 
    }

    if (max < count) {
      max = count;
    }
  }

  cout << max << endl;
}

// STARTED: 2023/10/01 00:00:23
// SUBMITTED: 2023/10/01 00:12:43
