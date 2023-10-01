My C++ code of AtCoder problems.

## Environment

1. Set .devcontainer/.env

```shell
ATCODER_USERNAME=your_atcoder_username
ATCODER_PASSWORD=your_atcoder_password
```

2. Launch DevContainer on VS Code.
3. Assign utility tasks to keybindings.json:

```json
[
  {
    "key": "ctrl+shift+t",
    "command": "workbench.action.tasks.runTask",
    "args": "Test AtCoder C++ Code with oj"
  },
  {
    "key": "ctrl+shift+s",
    "command": "workbench.action.tasks.runTask",
    "args": "Submit AtCoder C++ Code with acc"
  }
]
```

## My routin

### Join a new contest

```bash
cd contests/
$ acc new <contest name (e.g. abs)>
```

### Test and submit

VS Code
Run test script:

- `Ctrl + Shift + P` -> Tasks: Run Test Task -> "Test AtCoder C++ Code with oj"
- or shortcut key: `Ctrl + Shift + T`

Submit an answer:

- `Ctrl + Shift + P` -> Tasks: Run Task -> "Submit AtCoder C++ Code with acc"
- or shortcut key: `Ctrl + Shift + S`

### Forward the next task

```bash
# int the contest directory
$ acc add
```

## Scripts

### cpmain

Handle revisions for reviewing previous tasks.

```bash
# cp `acc config-dir`/cpp/main.cpp ./main.2.cpp
$ cpmain 2
```
