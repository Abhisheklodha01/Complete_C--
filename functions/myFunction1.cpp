#include<iostream>
using namespace std; 

// function overloading  ---> same name but diffrent parameter

int makingChai(int cups) {
    cout<<"Making cups in int: " <<cups<<endl;
}

int makingChai(double cups) {
    cout<<"Making cups in double: " <<cups<<endl;
}
int main()
{
    int cups = 10;
    makingChai(cups);
    makingChai(10.5);
    return 0;
}