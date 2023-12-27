#include<iostream>
using namespace std;

class Instrument
{
  public:
  virtual void playing()
  {
    cout<<"Instrument playing...\n";
  }
  virtual void breaking() = 0;
};


class Piano:public Instrument
{
  public:
  void playing()
  {
    cout<<"Piano playing...\n";
  }
  void breaking()
  {
    cout<<"breaking down piano\n";
  }
};

class Complex
{
  public:
  int real;
  int img;
  Complex(int real=0,int img=0)
  {
    this->real = real;
    this->img = img;
  }
  Complex operator +(Complex &b)
  {
    Complex c;
    c.real = b.real + this->real;
    c.img = b.img + this->img;
    return c; 
  }
  void print()
  {
    cout<<"The addition of complex numbers is: "<<this->real<<" + "<<this->img<<"* i";
  }
};



int main()
{
    // Instrument *i1 = new Piano();
    // i1->playing();
    // i1->breaking();
    Complex a(1,2);
    Complex b(1,1);
    Complex c = a + b;
    c.print();
    return 0;
}