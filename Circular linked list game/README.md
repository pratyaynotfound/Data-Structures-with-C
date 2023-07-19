# Circular Linked List Game

This code implements a circular linked list game. Players are represented as nodes in a circular linked list, and the game proceeds by eliminating every other player until only one player remains. The remaining player is declared the winner.

## Code Explanation

The code consists of the following functions:

1. `insert(Node **head, Node **tail, int data)`: This function inserts a new node at the end of the circular linked list. It takes the head and tail pointers of the list and the data for the new node as parameters.

2. `get_winner(Node **head, int n)`: This function determines the winner of the game by eliminating every other player. It takes the head pointer of the list and the total number of players as parameters.

The `main` function interacts with the user to create the circular linked list and find the winner. It performs the following steps:

1. Reads the total number of nodes (players) from the user.

2. Prompts the user to enter the elements (player data) for each node and inserts them into the circular linked list.

3. Calls the `get_winner` function to find the winner of the game.

4. Prints the data of the remaining node (winner) on the console.

## Game Rules

1. The game starts with a circular linked list of players.

2. Players are eliminated one by one until only one player remains.

3. In each elimination round, every other player is removed from the list.

4. The elimination continues until only one player remains, who is declared the winner.

## Usage

1. Compile the code using a C compiler.

2. Run the compiled executable.

3. Enter the total number of players (nodes) when prompted.

4. Enter the data for each player (node) when prompted.

5. The program will determine the winner and display the result on the console.

## Example

```bash
Enter the total no of Nodes:
7
Enter elements:
1
2
3
4
5
6
7
4 is the winner!

```

In this example, there are 7 players. The game proceeds by eliminating every other player in each round. Player 4 is declared the winner of the game.

