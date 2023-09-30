#include<bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  vector<int> dp(N);

  for (int i = 0; i < N; i++) {
    cin >> h.at(i);
  
    dp.at(i) = i == 0 ? 0 :
               i == 1 ? abs(h.at(0) - h.at(1)) :
                        min(dp.at(i-1) + abs(h.at(i) - h.at(i-1)),
                            dp.at(i-2) + abs(h.at(i) - h.at(i-2)));
  }

  cout << dp.back() << endl;
  return 0;
}
