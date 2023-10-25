#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  map<int64_t, int> A;
  for (int i : views::iota(0, N)) {
    int64_t a;
    cin >> a;
    A[a] = (A.contains(a) ? A.at(a) + 1 : 1);
  }

  int max_key = -1;
  int max_count = 0;
  for (auto& [key, count] : A) {
    if (count > max_count) {
      max_key = key;
      max_count = count;
    }
  }

  cout << max_key << " " << max_count << endl;
}

// STARTED: 2023/10/08 21:08:29
// SUBMITTED: 2023/10/08 21:42:54
