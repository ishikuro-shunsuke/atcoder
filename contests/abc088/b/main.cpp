#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }

  int Alice = 0;
  int Bob = 0;
  
  for (int i = 0; i < N; i++) {
    int max = 0;
    int max_index = -1;
    for (int j = 0; j < N; j++) {
      if (max < a.at(j)) {
        max = a.at(j);
        max_index = j;
      }
    }

    if (i % 2 == 0) {
      Alice += max;
    } else {
      Bob += max;
    }
    a.at(max_index) = 0;
  }

  cout << Alice - Bob << endl;
}

// STARTED: 2023/10/01 00:38:35
// SUBMITTED: 2023/10/01 00:47:15
