#include <iostream>
using namespace std;

/*
                       operators type

                1. Arithmetic ---> +, -, *, /, %
                2. Assignment ---> =, +=, -=, *=, /=, %=
                3. Logical    ---> !(not), ||(or), &&(and)
                4. Relational ---> >=, <=, >, <
                5. Bitwise    ---> & (and), | (or), ^ (xor), <<(left shift), >> (right shift)


*/
int main()
{
    // arithmetic
    cout << 2 + 5 << endl;
    cout << 2 - 5 << endl;
    cout << 10 * 2 << endl;
    cout << 10 / 2 << endl;
    cout << 11 % 2 << endl;

    // assignment
    int num = 5;
    num += 10;
    num *= 2;
    num /= 2;
    num %= 2;
    cout << num << endl;

    // relational
    int chaiCount = 10;
    if (chaiCount >= 5)
    {
        cout << chaiCount << endl;
    }
    else
    {
        cout << "Chai count is less then 5" << endl;
    }
    chaiCount = 1;
    if (chaiCount <= 5)
    {
        cout << chaiCount << endl;
    }
    else
    {
        cout << "Chai count is grater then 5" << endl;
    }

    // logical
    int number = 100;
    int number2 = 200;
    int number3 = 300;

    if (number2 != number)
    {
        cout << number2 << endl;
    }

    // bitwise


    return 0;
}