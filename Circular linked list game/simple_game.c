#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
//inserts a node at the end of the linked list
void insert(Node **head,Node **tail,int data){
    Node *newNode = malloc(sizeof(Node));//allocate memory
    newNode->data = data;//assign the data of the node
    //check the head is null or not
    if((*head) == NULL){
        //if null make a new list and assign newnode as the head 
        *head = newNode;
        *tail = newNode;
        newNode->next = (*head);//assignes the next value of the new node
    }
    else{
        //if head is not null then insert the node at last of the linked list
        (*tail)->next = newNode;//link the last and the new node
        (*tail) = newNode;//move the last node pointer to newnode
        newNode->next = (*head);//link the last node and the head node
    }
}
//find the winner
void get_winner(Node **head,int n){
    while(n>1){
        Node *q = (*head)->next;//assign the player that has to be elimineted 
        (*head)->next = q->next;//links the current node and current next next node
        free(q);//eliminates the player by freeing the space
        (*head) = (*head)->next;
        n--;
    }
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    //get total no of elements from the user
    printf("Enter the total no of Nodes:\n");
    scanf("%d",&n);
    //insert the elements in a linked list
    printf("Enter elements:\n");
    for(int i = 0;i<n;i++){
        int data;
        scanf("%d",&data);
        insert(&head,&tail,data);
    }
    //find out the winner 
    get_winner(&head,n);
    printf("%d is the winner!\n",head->data);//prints the last remaining node
}
