#include<iostream>
using namespace std;


class Base
{
  public:
   void barking()
   {
     cout<<"Animal Barks";
   }
};

class Derived: public Base
{
   public:
   void barking()
   {
     cout<<"Dog Barks";
   }
};

int main()
{
    Derived d1;
    d1.barking();
    return 0;
}