// DP
template<class T> bool chmax(T &a, const T b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T b) { if (b < a) { a = b; return true; } return false; }

// Coordinate
//   4 directions
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0 ,-1};

//   8 directions
const int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1};
const int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

