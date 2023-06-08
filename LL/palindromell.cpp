#include<iostream>
#include<vector>
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

void insert_end(Node *&head,int data)
{
    Node *temp = head;
    Node *curr = new Node(data);
    if(head==NULL){head = curr;}
    else
    {
      while(temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = curr;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<< "\n";
}

bool isPalindrome(vector<int> ans)
{
    int n = ans.size();
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        if(ans[s]!=ans[e]) {return false;}
        s++;
        e--;
    }
    return true;
}
void print_vector(vector<int> ans)
{
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<< " ";
    }
    cout<< "\n";
}
int main()
{
    Node *head = NULL;
    insert_end(head,1);
    insert_end(head,2);
    // insert_end(head,2);
    insert_end(head,1);
    // print(head);
    vector<int> ans;
    
    print_vector(ans);
    string result = isPalindrome(ans)?"Palindrome":"Not a palindrome";
    cout<<result;
    return 0;
}