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

void insert_beg(DNode *&head,int data)
{
    if(head == NULL)
    {
       DNode *temp = new DNode(data);
       head = temp; 
    }
    else
    {
     DNode *curr = new DNode(data);
     curr->next = head;
     head->prev = curr;
     head = curr;
    }
}

void insert_end(DNode *&head,int data)
{
    if(head == NULL)
    {
       DNode *temp = new DNode(data);
       head = temp; 
    }
    else
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
}

void insert_pos(int pos,DNode *&head,int data)
{
    if(pos==1)
    {
        insert_beg(head,data);
    }
    else
    {
     DNode *curr = new DNode(data);
     DNode *ini = head;
     while(pos > 2)
     {
        pos--;
        ini = ini->next;
     }
     curr->next = ini->next;
     ini-> next = curr;
     curr->prev = ini;
     ini->next->prev = curr;
    } 
}

int main()
{
    DNode *head = new DNode(5);
    print(head);
    cout<<"\n";
    insert_beg(head,6);
    print(head);
    cout<<"\n";
    insert_end(head,8);
    print(head);
    cout<<"\n";
    insert_pos(3,head,7);
    print(head);
    cout<<"\n";
    insert_pos(3,head,2);
    print(head);
    return 0;
}