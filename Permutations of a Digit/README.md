# Permutations of a Digit

This code generates all possible permutations of a given digit. It takes a digit as input from the user and outputs all the possible combinations of the digits.

## Code Explanation

The code consists of the following functions:

1. `swap(char *x, char *y)`: This function swaps the values of two characters. It takes two character pointers as parameters and performs the swap.

2. `permutations(char *str, int a, int len)`: This function generates all possible permutations of the digits. It takes the input string, the starting index for permutation generation, and the length of the string as parameters. It uses a recursive approach to generate permutations by swapping digits and backtracking.

The `main` function interacts with the user to get the input digit and generates all possible combinations. It performs the following steps:

1. Reads a digit as input from the user.

2. Calculates the length of the input string.

3. Calls the `permutations` function to generate all possible combinations.

4. Prints the generated permutations on the console.

## Usage

1. Compile the code using a C compiler.

2. Run the compiled executable.

3. Enter a digit when prompted.

4. The program will generate and display all possible combinations of the digit on the console.

## Example

```bash
Enter the digit:
123
All possible combinations:
123
132
213
231
312
321
```
In this example, the digit "123" is entered as input. The program generates all possible combinations of the digits and displays them on the console.

