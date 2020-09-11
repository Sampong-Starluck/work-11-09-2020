#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;

// int main()
// {
//     int i = 1, u = 1, sum = 0;
//     cout << "The perfect number between 1 and 500: ";
//     while (i <= 500)
//     {
//         while (u <= 500)
//         {
//             if (u < i)
//             {
//                 if (i % u == 0)
//                 {
//                     sum += u;
//                 }
//             }
//             u++;
//         }
//         if (sum == i)
//         {
//             cout << i << " ";
//         }
//         i++;
//         u = 1;
//         sum = 0;
//     }
// }

// int main()
// {
//     int start, end, count = 0;
//     bool status = true;
//     cout << "Enter the starting number: ";
//     cin >> start;
//     cout << "Enter the ending number: ";
//     cin >> end;
//     cout << "The prime number: ";
//     for(int i = start;i <= end;i ++)
//     {
//         for (int j = 2; j <= sqrt(i); j++)
//         {
//             if (i % j == 0)
//             {
//                 status = false;
//                 continue;
//             }
//         }
//         if (status == true && i != 1)
//         {
//             count++;
//             cout << i << " ";
//         }
//         status = true;
//     }
//     cout << "\nThe prime number that exist between " << start << " and " << end << " have " << count << endl;
// }

bool checkPrimeNumber(int);

int main()
{
    int n;

    cout << "Enter a positive  integer: ";
    cin >> n;

    if (checkPrimeNumber(n))
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    return 0;
}

bool checkPrimeNumber(int n)
{
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}