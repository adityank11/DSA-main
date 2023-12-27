#include<iostream>
#define max 5
using namespace std;


class Stack
{
  int arr[max];
  int top;
  public:
    Stack()
    {
        top = -1;
    }
    int peek() 
    {
        return arr[top];
    }
    bool isEmpty()
    {
        if(top<0) return true;
        else return false;
    }
    bool isFull()
    {
        if(top>=max-1) return true;
        else return false;
    }
    void push(int element)
    {
       if(top<max-1)
       {
         top++;
         arr[top] = element;
       }
       else
       {
         cout<<"Stack overflow!"<<endl;
       }
    }
    void pop()
    {
       if(top>-1)
       {
         int n = arr[top];
         cout<<"Popped element "<<n<<" from the stack."<<endl;
         top--;
       }
       else 
       {
         cout<<"Stack underflow!"<<endl;
       }
    }
    void print()
    {
        int n = top;
        while(top>-1)
        {
           cout<<arr[top]<<" ";
           top--;
        }
        cout<<"\n";
        top = n;
    }
};

int main()
{
    Stack st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.print();
    return 0;
}