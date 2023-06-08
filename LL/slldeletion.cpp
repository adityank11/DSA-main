#include<iostream>
using namespace std;

class Node
{
    public:
      int data;
      Node *next;
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insert_end(Node *&head,int data)
{
    Node *temp = new Node(data);
    Node *temp1 = head;
    while(temp1->next!=NULL)
    {
       temp1 = temp1->next; 
    }
    temp1->next = temp;

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

void delete_beg(Node *&head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
}

void delete_mid(Node *head)
{
    Node *curr = head;
    int c = 0;
    while(curr!=NULL)
    {
        c++;
        curr = curr->next;
    }
    if(c%2==0){c=c/2;}
    else{c = (c+1)/2;}
    curr = head;
    Node *prev = NULL;
    while(c >= 1)
    {
        c--;
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    free(curr);
}

void delete_pos(Node *&head,int pos)
{
   if(pos==1)
   {
     delete_beg(head);
   }
   else
   {
      Node *curr = head;
      curr  =  head;
      Node *prev = NULL;
      while(pos > 1)
      {
        pos--;
        prev = curr;
        curr = curr->next;
      }
      prev->next = curr->next;
      curr->next = NULL;
      free(curr);
   }
}

// void delete_without_head_pointer(Node *curr)
// {
//     curr->data = curr->next->data;   //swap values with 
//     curr->next = curr->next->next;
// }

int main()
{
    Node *head = new Node(4);
    insert_end(head,5);
    insert_end(head,1);
    insert_end(head,2);
    print(head);
    cout<<"\n";
    // delete_beg(head);
    // delete_mid(head);
    delete_pos(head,4);
    print(head);

    return 0;
}