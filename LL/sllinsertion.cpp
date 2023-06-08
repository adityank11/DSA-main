#include<iostream>
using namespace std;

class Node
{
   public:
     int data;
     Node *next;
   Node(int data)
   {
     this->data = data;
     this->next = NULL;
   } 
};

void insert_beg(Node *&head,int data)
{
    if(head == NULL)
    {
       Node *temp = new Node(data);
       head = temp; 
    }
    else
    {
       Node *temp = new Node(data);
       temp->next = head;
       head = temp;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


void insert_end(Node *&head,int data)
{
    if(head == NULL)
    {
       Node *temp = new Node(data);
       head = temp; 
    }
    else
    {
       Node *temp = new Node(data);
       Node *temp1 = head;
       while(temp1->next!=NULL)
       {
        temp1 = temp1->next; 
       }
       temp1->next = temp;
    }
}

void insert_mid(Node *&head,int data)
{
  if(head->next == NULL)
  {
    insert_end(head,data);
  }
  else if(head == NULL)
  {
    Node *temp = new Node(data);
    head = temp;
  }
  else
  {
    int c = 0;
    Node *temp = head;
    while(temp!= NULL)
    {
        c++;
        temp = temp->next;
    }
    temp = head;
    if(c%2==0){c=c/2;}
    else{c = (c+1)/2;}
    while(c > 1)
    {
      c--;
      temp = temp->next;
    }
    Node *curr = new Node(data);
    curr->next = temp->next;
    temp-> next = curr;
  }
}


void insert_at_pos(int pos,Node *&head,int data)
{
    if(pos==1)
    {
        insert_beg(head,data);
    }
    else
    {
       Node *temp = head;
       while(pos>2)
       {
         pos--;
         temp = temp->next;
       }
       Node *curr = new Node(data);
       curr->next = temp->next;
       temp->next = curr;
    }
}

int main()
{
    Node *head = new Node(4);
    // insert_beg(head,6);
    // insert_beg(head,8);
    // insert_end(head,6);
    // insert_end(head,8);
    insert_mid(head,6);
    insert_mid(head,7);
    insert_mid(head,8);
    print(head);
    cout<<"\n";
    insert_at_pos(3,head,9);
    print(head);
    return 0;
}