#include<iostream>
using namespace std;

class Car
{
   public:
   int num;
   Car()
   {
    cout<<"Constructor called!"<<endl;
   }
   ~Car()
   {
    cout<<"Destructor called"<<endl;
   }
};

int main()
{
    Car c1;
    Car *c2 = new Car;
    delete c2;
    return 0;
}