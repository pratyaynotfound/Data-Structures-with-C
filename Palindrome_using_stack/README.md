# Palindrome Linked List Checker

This code checks whether a given linked list is a palindrome or not. It reads input from the user for the elements of the linked list, creates the list, and then checks if it forms a palindrome.

## Code Explanation

The code consists of the following functions:

1. `insert(Node **head, Node** tail, int data)`: This function inserts a new node at the end of the linked list. It takes the head and tail pointers of the list and the data for the new node as parameters.

2. `push(int *arr, int top, int data)`: This function pushes elements into a stack. It takes the stack array, top index, and data to be pushed as parameters.

3. `copylist(Node* head)`: This function creates a copy of the linked list. It takes the head pointer of the original list and returns the head pointer of the copied list.

4. `isPalindrome(Node *original, int *arr, int top)`: This function checks whether the original linked list is a palindrome or not. It takes the original list, stack array, and top index as parameters and returns a flag indicating whether it is a palindrome or not.

The `main` function interacts with the user to create the linked list and checks if it is a palindrome. It performs the following steps:

1. Reads the total number of elements from the user.

2. Prompts the user to enter the elements for each node and inserts them into the linked list.

3. Initializes a stack array and inserts the elements from the linked list into the stack.

4. Calls the `isPalindrome` function to check if the linked list is a palindrome.

5. Prints the result on the console.

## Usage

1. Compile the code using a C compiler.

2. Run the compiled executable.

3. Enter the total number of elements in the linked list when prompted.

4. Enter the elements of the linked list one by one.

5. The program will determine whether the linked list is a palindrome or not and display the result on the console.

## Example

```bash
Enter the total no of elements:
5
Enter elements:
1
2
3
2
1
Given linked list is a palindrome.
```

In this example, the linked list contains the elements 1, 2, 3, 2, and 1. Since these elements form a palindrome sequence, the program outputs that the given linked list is a palindrome.

