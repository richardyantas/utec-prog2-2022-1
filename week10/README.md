1.- Dependencies:

* conda
* cling
* [clang-format](https://stackoverflow.com/questions/56883170/beautify-c-files-on-vscode)
  * [styles](https://clang.llvm.org/docs/ClangFormatStyleOptions.html)

2.- Generate a file with clang configuration from "llvm"

```shell
clang-format -style=llvm -dump-config > ~/.clang-format
```

After generate the format local file, use clang-format to 1.cpp

```shell
clang-format -style=file ./1.cpp
```

3.- Add the follow configuration in .vscode

```shell
"clang-format.language.cpp.style": "file",  
```

and the rest

```shell
"editor.formatOnSave": true,
"python.pythonPath": "/home/serendipita/anaconda3/envs/cling/bin/python",
"clang-format.executable": "/home/serendipita/anaconda3/envs/cling/bin/clang-format",
```

4.- set .vscode identation

```shell
"editor.tabSize": 4,
"editor.insertSpaces": true,
"editor.detectIndentation": false
```

5.- get into the environment

```shell
conda activate cling
```

6.-  clang-style 

[styles](https://clang.llvm.org/docs/ClangFormatStyleOptions.html)
