#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
 
  vector<vector<string>> R(N, vector<string>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      R.at(i).at(j) = "-";
    }
  }

  for (int i = 0; i < M; i++) {
    int winner = A.at(i) - 1;
    int looser = B.at(i) - 1;
    R.at(winner).at(looser) = "o";
    R.at(looser).at(winner) = "x";
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << R.at(i).at(j);
      if (j < N - 1) {
        cout << " ";
      } else {
        cout << endl;
      }
    }
  }
}

// STARTED: 2023/10/01 19:12:04
// SUBMITTED: 2023/10/01 19:40:58
