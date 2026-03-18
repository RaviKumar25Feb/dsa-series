// now deleting node from end
    int x = 2;

    if(x==1)
    {
        Node *temp = curr->next;
        delete curr;
        return temp;
    }
    curr->next = deleteNode(curr->next, x-1);
    return curr;