#include<bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  bool P, W, G, Y;
  P = W = G = Y = false;
  string S;
  for (int i = 0; i < N; i++) {
    cin >> S;
    if (S == "P") {
      P = true;
    } else if (S == "W") {
      W = true;
    } else if (S == "G") {
      G = true;
    } else if (S == "Y") {
      Y = true;
    }
  }
  if (Y) {
    cout << "Four" << endl;
  } else {
    cout << "Three" << endl;
  }
  return 0;
}
