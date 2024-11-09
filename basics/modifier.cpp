#include<iostream>
using namespace std; 

int main()
{
    // it stores garbeg value if we try to store negative value
    unsigned int smallTeaPack = -100;

    // it allows us to store signed intergers
    signed int bigTeaPack = -100;

    // if we want to store value that can not modify after the declaration
    const int smallTeaPack1 = 50;
    // smallTeaPack1 = 100; // error we can not modify value 

    // if we store value that can we large in size 
    long long teaPrice = 100000000;
     
    //
    short teaSample = 25; 

    cout<<smallTeaPack<<endl;
    cout<<bigTeaPack<<endl;
    return 0;
}