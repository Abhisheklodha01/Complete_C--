#include<iostream>
#include<string>
using namespace std; 


class Tea {
    public:
      virtual void prepareIngredients() = 0;
      virtual void brew() = 0;
      virtual void serve() = 0;

      void makeTea() {
        prepareIngredients();
        brew();
        serve();
      }
};

// derived class

class GreeTea : public Tea {
    public:
       void prepareIngredients() override {
          cout<<"green leaves and water is ready"<<endl;
       }
       void brew() override {
          cout<<"Green Tea brewed"<<endl;
       }
       void serve() override {
          cout<<"Green Tea served"<<endl;
       }
};

class MasalTea : public Tea {
    public:
       void prepareIngredients() override {
          cout<<"Tea leaves, tea masala, milk and water is ready"<<endl;
       }
       void brew() override {
          cout<<"Masala Tea brewed"<<endl;
       }
       void serve() override {
          cout<<"Masala Tea served"<<endl;
       }
};

int main()
{
    GreeTea greenTea;
    MasalTea masalaTea;   
    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}