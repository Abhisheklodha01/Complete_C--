#include<iostream>
using namespace std; 


// conditional things in cpp
int main()
{
    int num = 65;
    int num1 = 100;
    char ch = 'A';

    if (num < (int)ch)
    {
        cout<<"num is less than character";
    }
    else if(num == (int)ch) {
        cout<<"Number is equal to charcter";
    }
    else {
        cout<<"num is greater than character";
    }
    
    
    return 0;
}