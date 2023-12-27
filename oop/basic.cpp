#include<iostream>
using namespace std;

class Hero
{
   private:
     int ego;
   public: 
    int level;
    int health;

    //getter- way to access private members outside member class
    int get_ego()
    {
        return ego;
    }
    //setter 
    void set_ego(int e)
    {
        ego = e;
    }
    Hero()
    {
        cout<<"\nC called!"<<endl;
    }
    Hero(Hero& temp)
    {
        this->ego = temp.ego;
    }
};

int main()
{
    //Static allocation
    Hero flash;
    flash.set_ego(40);
    cout<<"Flash ego: "<<flash.get_ego()<<endl;
    Hero fast(flash);
    cout<<"Fast ego: "<<fast.get_ego()<<endl;
    //dynamic allocation
    Hero *thor = new Hero;
    thor->set_ego(100);
    // cout<<"Thor ego: "<<(*thor).get_ego()<<endl;
    cout<<"Thor ego: "<<thor->get_ego()<<endl;

    return 0;
}