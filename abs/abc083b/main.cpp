#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int total = 0;
  for (int i = 1; i <= n; i++) {
    //i/10000 + i%10000/1000 + i%1000/100 + i%100/10 + i%10
    /*
    int sum = 0;
    for (int j = 0; j <= 4; j++) {
      sum += i % pow(10, 5 - j) / pow(10, 4 - j);
    }*/
    int sum = i/10000 + i%10000/1000 + i%1000/100 + i%100/10 + i%10;
    if (a <= sum && sum <= b) {
      total += i;
    }
  }
  cout << total << endl;
  return 0;
}
