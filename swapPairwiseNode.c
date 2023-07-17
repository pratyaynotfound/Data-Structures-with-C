void swapPair() //For global head
{
    Node *temp = head;
    while (temp != NULL && temp->link != NULL)
    {
        temp->data = temp->data + temp->link->data;
        temp->link->data = temp->data - temp->link->data;
        temp->data = temp->data - temp->link->data;
        temp = temp->link->link;
    }
}
