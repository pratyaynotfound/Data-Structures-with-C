int detectLoop()
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
        if (slow == fast)
            return 1;
    }
    return 0;
}

void makeLoop(int position)
{
    Node *temp = head;
    Node *ptr;
    int count = 1;
    while (temp->link != NULL)
    {
        if (count == position)
            ptr = temp;
        temp = temp->link;
        count++;
    }
    temp->link = ptr;
}
