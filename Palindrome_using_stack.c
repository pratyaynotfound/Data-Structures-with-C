#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
//insert nodes
void insert(Node **head,Node** tail,int data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    if((*head) == NULL){
        (*head) = newNode;
        (*tail) = newNode;
        (*head)->next = NULL;
    }
    else{
        (*tail)->next = newNode;
        newNode->next = NULL;
        (*tail) = newNode;
    }
}
//stack push
int push(int *arr,int top, int data){
    top++;
    arr[top] = data;
    return top;
}
//copying the list
Node *copylist(Node* head){
    if(head == NULL)
        return NULL;
    else{
        Node* newNode = malloc(sizeof(Node));
        newNode->data = head->data;
        newNode->next = copylist(head->next);
        return newNode;
    }
}
//cheaking if the list is palindrome or not
int isPalindrome(Node *original,int *arr,int top){
    int flag = 0;
    //check the stack[top] value is same as linkedlist head or not
    while(original!=NULL&&top>=0){
        if(original->data != arr[top]){
            flag = 0;
        }
        else
            flag = 1;

        original = original->next;
        top--;
    }
    return flag;
}
int main(){
    int ch,total = 0;
    Node *head = NULL;
    Node *tail = NULL;
    //get input from user
    printf("Enter the total no of elements:\n");
    scanf("%d",&ch);
    //insert the given nodes
    printf("Enter elements\n");
    for(int i = 0;i<ch;i++){
        int data;
        scanf("%d",&data);
        insert(&head,&tail,data);
    }
    //stack declaration
    int arr[ch];
    int top = -1;
    Node *temp = head;
    //insert the elements in the stack
    while(temp!=NULL){
        top = push(arr,top,temp->data);
        temp = temp->next;
    }
    //check if the number is palindrome or not
    if(isPalindrome(head,arr,top)){
        printf("Given linked list is a palindrome.\n");
    }
    else
        printf("Given linked list is not a palindrome.\n");
}