#include<iostream>
using namespace std;

class Add
{
 public: 
  int add(int a, int b)
  {
    return a+b;
  }

  double add(double a,double b)
  {
    return a+b;
  }
};

class Complex
{
  private:
    int real, imag;
  public:
    Complex()
    {
      real = 0;
      imag = 0;
    }
    Complex(int r,int img)
    {
      real = r;
      imag = img;
    }
    void print()
    {
      cout<<real<<" + "<<imag<<"i";
    }
    Complex operator +(Complex c)
    {
      Complex temp;
      temp.real = real + c.real;
      temp.imag = imag + c.imag;
      return temp;
    }
};


int main()
{
    Add a1,a2;
    int k = a1.add(4,2);
    cout<<k<<"\n";
    double b = a2.add(5.1,4.2);
    cout<<b<<"\n";
    Complex c1(5,4);
    Complex c2(3,2);
    Complex c3(9,2);
    Complex c4;
    c4 = c1 + c2 + c3;
    c4.print();
    return 0;
}