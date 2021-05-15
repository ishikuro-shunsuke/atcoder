#include<bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  int min = 1000000000;
  for (int i = 0; i < N; i++) {
    int input;
    cin >> input;

    int count = 0;
    while (input % 2 == 0) {
      input /= 2;
      count++;
    }

    if (count < min) {
      min = count;
    }
  }
  cout << min << endl;
}
