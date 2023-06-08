#include<iostream>
using namespace std;

class CNode
{
    public:
    int data;
    CNode *next;

    CNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


void insertNode(CNode *&tail,int cmp,int data)
{
    if(tail == NULL)
    {
        CNode *temp = new CNode(data);
        tail = temp;
        tail->next = tail;
    }
    else
    {
        CNode *curr = tail;
        while(curr->data != cmp)
        {
            curr = curr->next;
        }
        CNode *temp = new CNode(data);
        temp->next = curr->next;
        curr->next = temp;
     }
}

void deleteNode(CNode *&tail, int val)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"Empty list, bitch!";
    }
    else
    {
       CNode *prev = tail;
       CNode *curr = tail->next;
       while(curr->data != val)
       {
         prev = curr;
         curr = curr->next;
       }
       prev->next = curr->next;
       if(curr==prev)  //1 node in LL
       {
          tail = NULL;
       }
       //>=2 nodes in LL
       else if(tail == curr){tail = prev;}   // vvimp
       curr->next = NULL;
       free(curr);
    }
}

void travel(CNode *&tail)
{
    CNode *temp = tail;
    if(tail==NULL)
    {
        cout<<"List is empty,bitch!";
        return;
    }
    do
    {
      cout<<tail->data<<" ";
      tail = tail ->next;
    } while (tail!=temp);
    cout<< endl;
}

int main()
{
    CNode *tail = NULL;

    insertNode(tail,6,7);
    travel(tail);
    insertNode(tail,7,2);
    travel(tail);
    insertNode(tail,7,3);
    travel(tail);
    insertNode(tail,2,4);
    travel(tail);
    deleteNode(tail,3);
    travel(tail);
    deleteNode(tail,7);
    travel(tail);
    return 0;
}