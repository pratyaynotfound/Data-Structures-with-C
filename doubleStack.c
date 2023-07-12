// implement the concept of double stack
#include <stdio.h>
#define n 10
int stack[10];
int top1 = -1, top2 = n;
void display1()
{
    if (top1 == -1)
        printf("Stack empty !\n");
    else
    {
        printf("The stack elements are : ");
        for (int i = top1; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}
void display2()
{
    if (top2 == n)
        printf("Stack empty !\n");
    else
    {
        printf("The stack elements are : ");
        for (int i = top2; i < n; i++)
            printf("%d ", stack[i]);
        printf("\n");
    }
}
void peek1()
{
    if (top1 <= -1)
        printf("Stack empty !\n");
    else
        printf("The element is %d\n", stack[top1]);
}
void peek2()
{
    if (top2 >= n)
        printf("Stack empty !\n");
    printf("The element is %d\n", stack[top2]);
}
void pop1()
{
    if (top1 >= 0)
        printf("The popped element is %d\n", stack[top1--]);
    else
        printf("Stack underflow !\n");
}
void pop2()
{
    if (top2 < n)
        printf("The popped element is %d\n", stack[top2++]);
    else
        printf("Stack underflow !\n");
}
void push1(int value)
{
    if (top1 < top2 - 1)
        stack[++top1] = value;
    else
        printf("Stack overflow !\n");
}
void push2(int value)
{
    if (top1 < top2 - 1)
        stack[--top2] = value;
    else
        printf("Stack overflow !\n");
}
int main()
{

    printf("\nFollow the mentioned keys to perform task\n\n");
    printf("1 -> push1\n2 -> pop1\n3 -> peek1\n4 -> display1\n");
    printf("5 -> push2\n6 -> pop2\n7 -> peek2\n8 -> display2\n9 -> exit\n");
    int select, value;
    do
    {
        printf("\nEnter your selection : ");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            printf("Enter the value to push : ");
            scanf("%d", &value);
            push1(value);
            break;
        case 2:
            pop1();
            break;

        case 3:
            peek1();
            break;

        case 4:
            display1();
            break;

        case 5:
            printf("Enter the value to push : ");
            scanf("%d", &value);
            push2(value);
            break;

        case 6:
            pop2();
            break;

        case 7:
            peek2();
            break;

        case 8:
            display2();
            break;

        case 9:
            printf("Exiting...");
            return 0;
            break;
        default:
            printf("Invalid choice !");
        }
    } while (select != 9);
    return 0;
}
