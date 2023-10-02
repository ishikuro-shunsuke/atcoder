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
acc new <contest name (e.g. abs)>
```

### Test and submit

VS Code
Run test script:

- `Ctrl + Shift + P` -> Tasks: Run Test Task -> "Test AtCoder C++ Code with oj"
- or shortcut key: `Ctrl + Shift + T`

Submit an answer:

- `Ctrl + Shift + P` -> Tasks: Run Task -> "Submit AtCoder C++ Code with acc"
- or shortcut key: `Ctrl + Shift + S`

See .vscode/tasks.json.

### Debug with gdb

1. Set break point
2. Press `F5`

See .vscode/launch.json.

### Forward the next task

```bash
# int the contest directory
acc add
```

## Scripts

### checkin

Add timestamp to the end of `main.cpp` and open by VS Code.

```bash
checkin
```

Initialize next revision for reviewing previous tasks.

```bash
# cp `acc config-dir`/cpp/main.cpp ./main.2.cpp and chekckin
checkin 2
```

`checkin` has alias `c`

```bash
# same as checkin
c
# same as checkin 2
c 2
```
