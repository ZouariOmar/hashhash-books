# Links
- [Bash Scripting Tutorial – Linux Shell Script and Command Line for Beginners](https://www.freecodecamp.org/news/bash-scripting-tutorial-linux-shell-script-and-command-line-for-beginners/)
- [Bash Scripting – If Statement](https://www.geeksforgeeks.org/bash-scripting-if-statement/)
- [xxd Command in Linux](https://www.geeksforgeeks.org/xxd-command-in-linux)
- [Manipuler les chaînes de caractères](https://abs.traduc.org/abs-5.1-fr/ch09s02.html)
---
# **Notes**
- **`**#!/usr/bin/bash**`**: This is a shebang line that specifies the path to the Bash interpreter. It indicates that the script should be executed using Bash.
- **`**echo -n "Enter Number: "**`**: This line prints the prompt “Enter Number: ” without a newline character (`-n` option). It waits for the user to enter a number.
- **`**fi**`**: This marks the end of the if statement.
- ****`-gt`****: Stands for “greater than” in the context of numerical comparison.
- ****`-lt`****: Stands for “less than” in the context of numerical comparison.
- ****`-ge`****: Stands for “greater than or equal to” in the context of numerical comparison.
- ****`-eq`****: Stands for "equal to” in the context of numerical comparison.
- #### The basic syntax of an `if-elif-else` statement in Bash:
```sh
#!/bin/bash

if [ condition1 ]; then  
# Code to be executed if condition1 is true  
elif [ condition2 ]; then  
# Code to be executed if condition2 is true  
elif [ condition3 ]; then  
# Code to be executed if condition3 is true  
else  
# Code to be executed if none of the conditions are true  
fi
```
- You can use `-a` for logical AND and `-o` for logical OR.
