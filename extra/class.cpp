#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

using namespace std;

class info // set class for private and public
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
    bool prime(int);
    bool perfect(int);
};
// all function are set in public while access to private info (number)
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
bool info::prime(int number)
{
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (number == 0 || number == 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= number / 2; ++i)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
bool info::perfect(int number)
{
    int i, sum, n;
    sum = 0;
    n = number;

    for (i = 1; i < n; i++)
    {
        /* If i is a divisor of number */
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return (number == sum);
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
// main function
int main()
{
    info in;
    int i = 1, num, n;
    bool check;
    while (i != 0)
    {
        cout << "\n1.Find fatorial." << endl;
        cout << "2.Find the power." << endl;
        cout << "3.Find sum suit." << endl;
        cout << "4.Find sum square." << endl;
        cout << "5.Count digit and sum digit." << endl;
        cout << "6.Check number whether it is prime number or not." << endl;
        cout << "7.Check number whether it is perfect number or not. " << endl;
        cout << "8.Exit" << endl;
        cout << "Enter your option: ";
        cin >> n;
        if (n == 8)
        {
            cout << "\nThe program is being exit........................" << endl;
            exit(0);
        }
        else if (n >= 9)
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
            case 6:
                if (in.prime(num) == true)
                {
                    cout << num << " is a prime number." << endl;
                }
                else
                {
                    cout << num << " is not a prime number." << endl;
                }
                break;
            case 7:
                if (in.perfect(num) == true)
                {
                    cout << num << " is a perfect number." << endl;
                }
                else
                {
                    cout << num << " is not a perfect number." << endl;
                }
                break;
            default:
                break;
            }
        }
    }
}
