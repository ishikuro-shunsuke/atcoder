#include <bits/stdc++.h>
using namespace std;

int parse_int_expr(auto int_vars) {
  string word;
  int value = 0;
  string op = "+";
  do {
    cin >> word;
    if (word == "+") {
      op = "+";
    } else if (word == "-") {
      op = "-";
    } else if ('0' <= word.at(0) && word.at(0) <= '9') {
      if (op == "+") {
        value += stoi(word);
      } else {
        value -= stoi(word);
      }
    } else {
      if (op == "+") {
        value += int_vars[word];
      } else {
        value -= int_vars[word];
      }
    }
  } while (word != ";");

  return value;
}

enum class VecExprState {
  Fetch,
  BuildVec,
  FinishFetching,
};

auto parse_vec_expr(auto int_vars, auto vec_vars) {
  VecExprState state = VecExprState::Fetch;

  string word;
  vector<int> value;
  string op = "+";

  vector<int> tmp_value;

  while (true) {
    if (state == VecExprState::Fetch) {
      cin >> word;

      if (word == "=") {
        continue;
      }

      if (word == "[") {
        tmp_value.clear();
        state = VecExprState::BuildVec;
        continue;
      } else {
        // <vec変数>
        tmp_value = vec_vars[word];

        state = VecExprState::FinishFetching;
        continue;
      }
    } else if (state == VecExprState::FinishFetching) {
      if (value.empty()) {
        for ([[maybe_unused]] auto _ : views::iota(0, (int)tmp_value.size())) {
          value.emplace_back(0);
        }
      }

      for (int i : views::iota(0, (int)value.size())) {
        if (op == "+") {
          value.at(i) += tmp_value.at(i);
        } else {
          value.at(i) -= tmp_value.at(i);
        }
      }

      cin >> word;

      if (word == ";") {
        break;
      }

      op = word;

      state = VecExprState::Fetch;
    } else if (state == VecExprState::BuildVec) {
      cin >> word;

      if (word == ",") {
        continue;
      } else if (word == "]") {
        state = VecExprState::FinishFetching;
        continue;
      } else if ('0' <= word.at(0) && word.at(0) <= '9') {
        tmp_value.emplace_back(stoi(word));
      } else {
        tmp_value.emplace_back(int_vars[word]);
      }
    }
  }

  return value;
}

int main() {
  map<string, int> int_vars;
  map<string, vector<int>> vec_vars;

  int N;
  cin >> N;

  for ([[maybe_unused]] auto _ : views::iota(0, N)) {
    string instr;
    cin >> instr;

    if (instr == "int") {
      string var_name;
      cin >> var_name;
      cin.ignore();

      int_vars[var_name] = parse_int_expr(int_vars);
    } else if (instr == "print_int") {
      cout << parse_int_expr(int_vars) << endl;
    } else if (instr == "vec") {
      string var_name;
      cin >> var_name;
      cin.ignore();

      vec_vars[var_name] = parse_vec_expr(int_vars, vec_vars);
    } else if (instr == "print_vec") {
      vector<int> vec = parse_vec_expr(int_vars, vec_vars);
      cout << "[ ";
      for (int e : vec) {
        cout << e << " ";
      }
      cout << "]" << endl;
    }
  }
}

// STARTED: 2023/10/17 19:28:34
// SUBMITTED: 2023/10/25 20:42:41
