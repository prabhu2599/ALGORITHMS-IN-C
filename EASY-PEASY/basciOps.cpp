#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers, subOfTwoNumbers, mulOfTwoNumbers;
    
    cin >> firstNumber >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;
    subOfTwoNumbers = firstNumber - secondNumber;
    mulOfTwoNumbers = firstNumber * secondNumber;

    cout <<sumOfTwoNumbers<<"\n";
    cout <<subOfTwoNumbers<<"\n";
    cout <<mulOfTwoNumbers<<"\n";

    return 0;
}
