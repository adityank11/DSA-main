#include<iostream>
using namespace std;

class DNode
{
    public:
    int data;
    DNode *prev;
    DNode *next;

    DNode(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(DNode *head)
{
    DNode *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insert_end(DNode *&head,int data)
{
    DNode *curr = new DNode(data);
    DNode *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = curr;
    curr->prev = temp; 
}

void del_beg(DNode *&head)
{
    if(head==NULL)
    {
        cout<<"Nothing to delete!";
    }
    else
    {
       DNode *temp = head;
       head = head->next;
       head->prev = NULL;
       temp->next = NULL;
       free(temp);
    }
}

void del_end(DNode *&head)
{
    if(head==NULL)
    {
        cout<<"Nothing to delete!";
    }
    else
    {
       DNode *curr = head;
       DNode *ini = NULL;

       while(curr->next!=NULL)
       {
         ini = curr;
         curr = curr->next;
       }
        ini->next = NULL;
        curr->prev = NULL;
        free(curr);
    }
}

void del_pos(DNode *&head,int pos)
{
    if(head==NULL)
    {
        cout<<"Nothing to delete!";
    }
    else if(head->next == NULL)
    {
        del_beg(head);
    }
    else
    {
       DNode *curr = head;
       DNode *ini = NULL;
       while(pos > 1)
       {
         pos--;
         ini = curr;
         curr = curr->next;
       }
       ini->next = curr->next;
       curr->next->prev = ini;
       curr->next = NULL;
       curr->prev = NULL;
       free(curr);
    }
}

int main()
{
    DNode *head = new DNode(5);
    // print(head);
    // cout<<"\n";
    insert_end(head,8);
    insert_end(head,9);
    insert_end(head,11);
    insert_end(head,12);
    print(head);
    cout<<"\n";
    del_beg(head);
    print(head);
    cout<<"\n";
    del_end(head);
    print(head);
    cout<<"\n";
    del_pos(head,2);
    print(head);
    return 0;
}