#include<bits/stdc++.h>
using namespace std;
int main() {
  char c;
  cin >> c;
  if ("aeiou"s.find(c) != string::npos) {
    cout << "vowel" << endl;;
  } else {
    cout << "consonant" << endl;
  }
  return 0;
}
// PASSED : 2023/09/30 06:34:44
