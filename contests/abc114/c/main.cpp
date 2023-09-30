#include<bits/stdc++.h>
using namespace std;

long count(long prev, long max, bool three, bool five, bool seven) {
  if (prev * 10 + 3 > max) {
    if (three && five && seven) {
      return 1;
    } else {
      return 0;
    }
  }

  long c = (three && five && seven) ? 1 : 0;
  c += count(prev * 10 + 3, max, true, five, seven);
  if (prev * 10 + 5 <= max) {
    c += count(prev * 10 + 5, max, three, true, seven);
    if (prev * 10 + 7 <= max) {
      c += count(prev * 10 + 7, max, three, five, true);
    }
  }
  return c;
}

int main() {
  long N;
  cin >> N;

  cout << count(0, N, false, false, false) << endl;

  return 0;
}
