# Python Notes

## Python operators

- It's possible to formulate the following rules:
  - integer `operator` integer `=` integer
  - integer `operator` other-type `=` other-type
- A unary operator is an operator with only one operand, e.g., -1, or +3.
- A binary operator is an operator with two operands, e.g., 4 + 5, or 12 % 5.

## Python Variables

- A variable comes into existence as a result of assigning a value to it.
  Unlike in other languages, you don't need to declare it in any special way.
- If you assign any value to a nonexistent variable,
  the variable will be automatically created. You don't need to do anything else.
- Python is a dynamically-typed language, which means you don't need to declare
  variables in it. (2.1.4.3) To assign values to variables, you can use a simple
  assignment operator in the form of the equal (=) sign, i.e., var = 1.

## Logic and bit operations in Python

1. Python supports the following logical operators:
   `and` → if both operands are true, the condition is true, e.g., (True and True) is True,
   `or` → if any of the operands are true, the condition is true, e.g., (True or False) is True,
   `not` → returns false if the result is true, and returns true if the result is false, e.g., not True is False.

2. You can use bitwise operators to manipulate single bits of data. The following sample data:
   x = 15, which is 0000 1111 in binary,
   y = 16, which is 0001 0000 in binary.
   will be used to illustrate the meaning of bitwise operators in Python. Analyze the examples below:
   - & does a bitwise and, e.g., x & y = 0, which is 0000 0000 in binary,
   - | does a bitwise or, e.g., x | y = 31, which is 0001 1111 in binary,
   - ˜ does a bitwise not, e.g., ˜ x = 240\*, which is 1111 0000 in binary,
   - ^ does a bitwise xor, e.g., x ^ y = 31, which is 0001 1111 in binary, >> does a bitwise right shift, e.g., y >> 1 = 8, which is 0000 1000 in binary,
   - << does a bitwise left shift, e.g., y << 3 = 128, which is 1000 0000 in binary.

- -16 (decimal from signed 2's complement) -- read more about the [Two's complement](https://en.wikipedia.org/wiki/Two%27s_complement) operation.

## Python `range`

- `range(start, stop, step)`: Generates a sequence starting from the `start` value up to (but not including) the `stop` value, with a custom `step` value.
- Parameters

  - `start` (optional): The starting value of the sequence. Defaults to 0 if not specified.
  - `stop` (required): The ending value of the sequence. The sequence will stop before reaching this value.
  - `step` (optional): The increment value between numbers in the sequence. Defaults to 1 if not specified.

## Python `sort` && `sorted` algorithm

- Python's built-in `sort()` method and `sorted()` function utilize the **Timsort algorithm**. Timsort is a hybrid sorting algorithm derived from merge sort and insertion sort, designed to perform well on many kinds of real-world data.
- Timsort has a time complexity of _O(n log n)_ in the worst case and can achieve O(n) in the best case (when the input is already sorted or nearly sorted).
- How to use sort() and sorted():
  - `list.sort()`: Sorts the list in-place (modifies the original list).
  - `sorted(list)`: Returns a new sorted list without modifying the original list.
