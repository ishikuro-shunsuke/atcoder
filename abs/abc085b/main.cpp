#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> d;
  int level = 0;
  int input;
  for (int i = 0; i < n; i++) {
    cin >> input;
    if (find(d.begin(), d.end(), input) == d.end()) {
      level++;
      d.push_back(input);
    }
  }
  cout << level << endl;
  return 0;
}
