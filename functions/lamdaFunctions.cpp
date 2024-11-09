#include<iostream>
using namespace std; 

// lamda function ---> function without name 
// syntax ---->  [](parameter){body};
// lamda function is similar to arraw function ij javascript

int main()
{
    auto preparedChai = [](int cups) {
        cout<<"Preparing "<<cups<<" cups of tea"<<endl;
    };

    preparedChai(5);
    
    return 0;
}