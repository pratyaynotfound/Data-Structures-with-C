// check palindrome using appropriate ADT
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int top1 = -1, top2 = -1;
int len;
char *stack1;
char *stack2;
void push1(char ch)
{
    if (top1 >= len - 1)
        printf("Stack overflow !\n");
    else
        stack1[++top1] = ch;
}
void push2(char ch)
{
    if (top2 >= len - 1)
        printf("Stack overflow !\n");
    else
        stack2[++top2] = ch;
}
char pop1()
{
    if (top1 <= -1)
        printf("Stack underflow !\n");
    else
        return stack1[top1--];
}

char pop2()
{
    if (top2 <= -1)
        printf("Stack underflow !\n");
    else
        return stack2[top2--];
}

int is_palindrome(char *text)
{
    if (len == 0)
        return 1;
    else
    {

        for (int i = 0; text[i] != '\0'; i++)
        {
            if (text[i] == 9 || (text[i] >= 32 && text[i] <= 47) || (text[i] >= 58 && text[i] <= 64) || (text[i] >= 91 && text[i] <= 96) || (text[i] >= 123 && text[i] <= 126))
                continue;
            push1(tolower(text[i]));
        }

        int temp = top1;
        for (int i = top1; i >= 0; i--)
            push2(pop1());
        top1 = temp;
        for (int i = temp; i >= 0; i--)
        {
            if (pop1() != pop2())
                return 0;
        }
        return 1;
    }
}

int main()
{
    char text[100];
    printf("Enter a string : ");
    gets(text);
    len = strlen(text);
    stack1 = (char *)malloc(len * sizeof(char));
    stack2 = (char *)malloc(len * sizeof(char));
    if (is_palindrome(text))
        printf("Palindrome");
    else
        printf("Not palindrome");
    free(stack1);
    free(stack2);
    return 0;
}
