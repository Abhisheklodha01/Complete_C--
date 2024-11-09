#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
     int cupOfTeas;
     cout<<"Enter a number of tea cups serve"<<endl;
     cin>>cupOfTeas;
     cout<<endl;

                  while loop
     while (cupOfTeas > 0)
     {
         cupOfTeas--;
         cout<<"Serving a cup of tea \n"<<cupOfTeas<<" Remaining"<<endl;
     }
    */

    /*
                 do-while loop

    string order;
    do
    {
        cout<<"Do you want more tea (yes/no)"<<endl;
        getline(cin, order);
    } while (order == "yes");
    */

    /*
                 for loop

     for ( varaible; condition; increament/decreament)
     {
         code
     }
    */

    /*
     for (int i = 1; i < 10; i++)
     {
         if (i == 2)
         {
             cout << "making number of cup for you: " << i << endl;
             continue;
         }
         else if (i == 7)
         {
             cout << "you hit maximum number of cup of tea" << endl;
             cout << "Do you want more cup of tea" << endl;
             string response;
             cin >> response;
             if (response == "yes")
             {
                 cout << "making number of cup for you: " << i << endl;
                 continue;
             }
             else
             {
                 cout << "you hit maximum number of cup of tea and you do not " << "want to order more cup of tea " << endl;
                 break;
             }
         }
         else
         {
             cout << "making number of cup for you: " << i << endl;
         }
     }

    */

    

    return 0;
}