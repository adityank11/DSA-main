#include<iostream>
#include<map>
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

void print(Node *head)
{
    if(head==NULL || head->next == NULL) 
    { 
        cout<<head->data;
        return;
    }
    Node *temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout << "\n";
}
void insert_at_end(Node *&head,int data)
{
  Node *temp = new Node(data);
  if(head==NULL)
  {
    head = temp;
  }
  else
  {
    Node *travel = head;
    while(travel->next!=NULL)
    {
     travel = travel->next;
    }
    travel->next = temp;
    temp->next = NULL;
  }
 
}

bool loop_detection(Node *head)
{
  map<Node *,int> visited;
  Node *temp = head;
  while(temp!=NULL)
  {
    if(visited[temp]==true) {return true;}
    visited[temp] = true;
    temp = temp->next;
  }
  return false;
}

Node *floyd_loop_detection(Node *head)
{
  Node *fast = head;
  Node *slow = head;
  while(slow!=NULL && fast!=NULL)
  {
    fast = fast->next;
    if(fast!=NULL)
    {
      fast = fast->next;
    }
    slow = slow->next;
    if(fast==slow)
    {
      cout<<"Loop present at "<<slow->data<<endl;
      return slow;
    }
  }
  return NULL;
}


Node *loop_starting_node(Node *head)
{
  Node *fast = head;
  Node *slow = head;
  while(slow!=NULL && fast!=NULL)
  {
    fast = fast->next->next;
    slow = slow->next;
    if(fast==slow)
    {
      slow = head;
      while(fast!=slow)
      {
        slow = slow->next;
        fast = fast->next;
      }
      cout<<"Starting node of loop is "<<slow->data<<endl;
      return slow;
    }
  }
  return NULL;
}

Node *removeloop(Node *head)
{
  Node *start = loop_starting_node(head);
  if(start==NULL) { return NULL; }
  Node *temp = start;
  while(temp->next!=start)
  {
    temp = temp->next;
  }
  temp->next = NULL;
  return head;
}

int main()
{
    Node *head = NULL;
    insert_at_end(head,4);
    insert_at_end(head,3);
    insert_at_end(head,6);
    insert_at_end(head,7);
    Node *temp = head;
    Node *n1 = head;
    n1 = n1->next;
    while(temp->next!=NULL)
    {
      temp = temp->next;
    }
    temp->next = n1;
    // print(head);
    // if(loop_starting_node(head)!=NULL){cout<<"Cycle present!";}
    // else {cout<<"No cycle!";}
    removeloop(head);
    print(head);
    return 0;
}