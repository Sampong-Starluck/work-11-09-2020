#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class info
{
private:
    int number;

public:
    void setfield(int);
    int sumSuit(int);
    int sumSquare(int);
    long factorial(int);
    int countDigit(int);
    int sumDigit(int);
    int power(int, int);
};
int main()
{
    info in;
    int i = 1, num, n;
    while (i != 0)
    {
        cout << "\n1.Find fatorial." << endl;
        cout << "2.Find the power." << endl;
        cout << "3.Find sum suit." << endl;
        cout << "4.Find sum square." << endl;
        cout << "5.Count digit and sum digit." << endl;
        cout << "6.Exit" << endl;
        cout << "Enter your option: ";
        cin >> n;
        if (n == 6)
        {
            cout << "\nThe program is being exit........................" << endl;
            exit(0);
        }
        else if (n >= 7)
        {
            cout << "\nYour input is invalid, please restart the program !!!!!!!!" << endl;
            exit(0);
        }
        else
        {
            cout << "Enter the number: ";
            cin >> num;
            switch (n)
            {
            case 1:
                cout << "The factorial from of " << num << " is " << in.factorial(num) << endl;
                break;
            case 2:
                int p;
                cout << "Enter the power that you want to raise: ";
                cin >> p;
                cout << num << " raise to the power of " << p << in.power(num, p) << endl;
                break;
            case 3:
                printf("The suit summation from 1 to %d is %d.\n", num, in.sumSuit(num));
                break;
            case 4:
                printf("The square summation from 1 to %d is %d.\n", num, in.sumSquare(num));
                break;
            case 5:
                printf("%d has %d digits and sum of digits is %d.\n", num, in.countDigit(num), in.sumDigit(num));
                break;
            default:
                break;
            }
        }
    }
}
void info::setfield(int num)
{
    number = num;
}
long info::factorial(int number)
{
    if (number == 1)
    {
        /* code */
        return 1;
    }
    else
    {
        return factorial(number - 1) * number;
    }
}
int info::power(int number, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return power(number, p - 1) * number;
    }
}
int info::sumSuit(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return sumSuit(number - 1) + number;
    }
}
int info::sumSquare(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return sumSuit(number - 1) + (number * number);
    }
}
int info::countDigit(int number)
{
    static int count = 0;
    if (number == 0)
    {
        return count;
    }
    else
    {
        count++;
        return countDigit(number / 10);
    }
}
int info::sumDigit(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return (number % 10) + sumDigit(number / 10);
    }
}
