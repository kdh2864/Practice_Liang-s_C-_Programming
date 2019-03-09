#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the first 9 digits of an ISBN as integer: ";
    int number;
    cin >> number;
    
    int num1 = number / 100000000;
    int num2 = number / 10000000 % 10;
    int num3 = number / 1000000 % 10;
    int num4 = number / 100000 % 10;
    int num5 = number / 10000 % 10;
    int num6 = number / 1000 % 10;
    int num7 = number / 100 % 10;
    int num8 = number / 10 % 10;
    int num9 = number % 10;
    
    int ISBNNumber = num1 * 1 + num2 * 2 + num3 * 3 + num4 * 4 + num5 * 5 +
                 num6 * 6 + num7 * 7 + num8 * 8 + num9 * 9;
    ISBNNumber %= 11;
    cout << "The ISBN-10 number is " << number;

    if(ISBNNumber == 10)
        cout << "X" << endl;
    else
        cout << ISBNNumber << endl;
    return 0;
}