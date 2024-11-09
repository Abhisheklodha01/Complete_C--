#include <iostream>
using namespace std;

/*
       function
 returnType functionName(parameter)
 {
    body of function
 }

     returnType
     void, int, double, string, float

     parameter ---> it is an optional to give in function
     fucntionName ---> user defined name but not predefined keywords
     body ---> set of task that function do

*/

int checkTemprature(int tempratureValue)
{
    return tempratureValue;
}

// declaration of function
void serverChai(int cups); // we can defined function later on

int main()
{
    int ans = checkTemprature(32);
    cout << ans<<endl;;
    serverChai(5);
    return 0;
}

void serverChai(int cups)
{
    cout << cups << endl;
}