#include<bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;

  vector<bool> o(10);
  vector<bool> x(10);
  vector<bool> q(10);
  

  for (int i = 0; i < 10; i++) {
    o.at(i) = S.at(i) == 'o';
    x.at(i) = S.at(i) == 'x';
    q.at(i) = S.at(i) == '?';
  }

  int count = 0;
  for (int a = 0; a < 10; a++) {
    for (int b = 0; b < 10; b++) {
      for (int c = 0; c < 10; c++) {
        for (int d = 0; d < 10; d++) {
          string pin = {'0' + a, '0' + b, '0' + c, '0' + d};

          int flag = true;
          for (int i = 0; i < 10; i++) {
            if (o.at(i) && pin.find('0' + i) == string::npos) {
              flag = false;
            }
            if (x.at(i) && pin.find('0' + i) != string::npos) {
              flag = false;
            }
          }
          if (flag) {
            count++;
          }
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}
