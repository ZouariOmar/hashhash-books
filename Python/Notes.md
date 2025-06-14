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

## Python `range`

- `range(start, stop, step)`: Generates a sequence starting from the `start` value up to (but not including) the `stop` value, with a custom `step` value.
- Parameters
  - `start` (optional): The starting value of the sequence. Defaults to 0 if not specified.
  - `stop` (required): The ending value of the sequence. The sequence will stop before reaching this value.
  - `step` (optional): The increment value between numbers in the sequence. Defaults to 1 if not specified.
