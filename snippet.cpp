#include <bits/stdc++.h>
using namespace std;

// DP
template <class T> bool chmax(T &a, const T b) { if (a < b) { a = b; return true; } return false; }
template <class T> bool chmin(T &a, const T b) { if (b < a) { a = b; return true; } return false; }

// Coordinate
//   4 directions
const vector<pair<int, int>> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

//   8 directions
const vector<pair<int, int>> d = {{0, 1},   {1, 0},  {-1, 0}, {0, -1},
                                  {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
