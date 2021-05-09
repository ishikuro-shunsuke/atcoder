My C++ code of AtCoder problems.

## Environment

```bash
$ npm install -g atcoder-cli
$ pip3 install online-judge-tools
$ mkdir -p `acc config-dir`/cpp
$ confd=$_
$ cat  > $confd/template.json <<EOF
{
  "task":{
    "program": ["main.cpp"],
    "submit": "main.cpp"
  }
}
EOF
$ cat  > $confd/main.cpp <<EOF
#include<bits/stdc++.h>
using namespace std;
int main() {

}
EOF
$ acc config default-template cpp
$ mkdir -p ~/.local/include/bits
$ cat > $_/stdc++.h << EOF
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
EOF
$ echo 'export CPLUS_INCLUDE_PATH=$CPLUS_INCLUDE_PATH:~/.local/include/' >> ~/.bashrc
```

## My routin

Log in

```bash
$ acc login
$ oj login https://atcoder.jp
```

Join a new contest

```bash
$ acc new <contest name (e.g. abs)>
```

Submit

```bash
# in the task directory which is made by acc
$ g++ main.cpp && oj t -d tests && acc s
```

Forward the next task

```bash
# int the contest directory
$ acc add
```
