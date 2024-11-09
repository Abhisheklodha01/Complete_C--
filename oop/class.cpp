#include <iostream>
#include <vector>
#include<string>
using namespace std;
/*
 structure of class
class className{
  access modifier ---> public, protected , private by default it is private
  data members (attribues)
  member function 
}
*/

class Chai{
   public:
   string teaName;
   int serving;
   vector<string> ingredeints;

   void displayChaiDetails() 
   {
      cout << "Tea Name " << teaName << endl;
      cout << "Tea servings " << serving << endl;
      cout << "Ingredeints: ";
      for(string ingredient: ingredeints) 
      {
         cout << ingredient << ", ";
      }
      cout << endl;
   }
     
};

int main()
{
    Chai chaiOne;
    chaiOne.teaName = "Masala Chai";
    chaiOne.serving = 2;
    chaiOne.ingredeints = {"Water", "Tea leaves", "Milk", "Ginger"};
    chaiOne.displayChaiDetails();
    return 0;
}