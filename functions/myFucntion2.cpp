#include<iostream>
using namespace std; 

// pass by value

int checkTemprature(int tempratureValue)
{
    tempratureValue = tempratureValue + 5;
    cout<<"temprature value in pass by value: "<<tempratureValue<<endl;
}

// pass by reference
int checkTemprature1(int &tempratureValue)
{
    tempratureValue = tempratureValue + 5;
    cout<<"temprature value in pass by refrence: "<<tempratureValue<<endl;
}

int main()
{
    int value = 35;
    checkTemprature(value);
    cout<<value<<endl;

    checkTemprature1(value);
    cout<<value<<endl;
    
    return 0;
}