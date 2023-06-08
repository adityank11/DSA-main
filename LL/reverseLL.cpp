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

void insert_at_end(Node *&head,int data)
{
    if(head==NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *curr = new Node(data);
        Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = curr;
    }
}


void print(Node *head)
{
    if(head==NULL)
    {
        cout<<"NULL";
        return;
    }
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<"\n";
}


void reverseLL(Node *head)
{
  
      if(head==NULL || head->next == NULL)
      {
        print(head);
        return;
      }
      Node *prev = NULL;
	  Node *curr = head;
	  Node *forward = NULL;
	  while(curr!=NULL)
	  {
		forward = curr->next;
		curr->next = prev;
		prev = curr;
		curr = forward;
	  }
      print(prev);

}

void rotate(Node *head, int k)
{
    while(k-->0)
    {
    if(head==NULL || head->next == NULL)
    {
     print(head);
     return;
    }
    Node *curr = head;
    Node *prev = NULL;
    while(curr->next!=NULL)
    {
        prev = curr;
        curr = curr->next;
    }
     curr->next = head;
     prev->next = NULL;
    //  print(curr);
     head = curr;
    }
    print(head);
}



// class Solution {             //optimized approach
// public:
//     ListNode* rotateRight(ListNode* head, int k) 
//     {
//       if(head==NULL || head->next==NULL)
//       {
//         return head;
//       }
//       int c = 1;
//       ListNode *count = head;
//       while(count->next!= NULL)
//       {
//           c++;
//           count = count->next;
//       }
//       k = k % c;
//       k = c - k;
//       count->next = head;
//       while(k-->0){count=count->next;}
//       head = count->next;
//       count->next = NULL;
    
//       return head;
//     }
// };

int main()
{
    Node *head = new Node(11);
    // Node *head = NULL;
    insert_at_end(head,23);
    insert_at_end(head,17);
    insert_at_end(head,21);
    insert_at_end(head,27);
    print(head);
    // reverseLL(head);
    rotate(head,2);
    return 0;
}