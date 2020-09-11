#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// int main() {

//     for (int i = 1; i <= 100; i = i + 1)
//     {
//         if (i == 30)
//         {
//             continue;
//         }
//         if (i == 60)
//         {
//             break;
//         }
//         printf("%d ", i);
//     }
//         return 0;
// }

// int main() {

//     int i = 200;
//     // do
//     // {
//     //     printf("%d ", i);
//     //     i++;
//     // } while(i <= 100);
//     while (i <= 100)
//     {
//         printf("%d ", i);
//         i++;
//     }
//     return 0;
// }

// int main() {
//     for (int i = 0; i < 100; i++)
//     {
//         if (i % 2 ==0)
//         {
//             continue;
//         }
//         printf("%d ", i);
//     }

// }

/*int main() {
    int n, count = 0;
    printf("Enter the positive number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        //condition for non-prime
        if (n % i == 0)
        {
            count++;
            break;
        } 
    }
    if (count == 0)
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
}*/

// int main() {
//     int n;
//     bool status = true;
//     printf("Enter the positive number: ");
//     scanf("%d", &n);
//     for (int i = 2; i <= n / 2; i++)
//     {
//         //condition for non-prime
//         if (n % i == 0)
//         {
//             status = false;
//             break;
//         }
//     }
//     if (status == true)
//     {
//         printf("%d is a prime number.", n);
//     }
//     else
//     {
//         printf("%d is not a prime number.", n);
//     }
// }

// int main() {
//     int num, fac = 1, i = 1;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     // for(int i = 1;i <= num;i++)
//     // {
//     //     //fac *= i;
//     //     fac = fac * i;
//     // }
//     while (i <= num)
//     {
//         fac *= i;
//         i++;
//     }
//     printf("%d factorial is %d.", num, fac);
// }

// exercise 4
// int main(){
//     int num;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     for(int i = 1;i <= num;i++)
//     {
//         printf("%d cube is %d.\n", i, (i * i * i));
//     }
// }

// exercise 2
// int main() {
//     int a, b, c;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//     printf("Enter the third number: ");
//     scanf("%d", &c);
//     if (a >= b && a >= c)
//     {
//         printf("%d is the largest number.", a);
//     }
//     else if (b >= a && b >= c)
//     {
//         printf("%d is the largest number.", b);
//     }
//     else
//     {
//         printf("%d is the largest number.", c);
//     }
    
// }

// int main()
// {
//     int n, sum = 0, sum1 = 0;

//     printf("Enter a n: ");
//     scanf("%d", &n);

//     for (int i = 0; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//             printf("%d ", i);
//         }
//         else
//         {
//             sum1 = sum1 + i;
//             printf("%d ", i);
//         }
//     }
//     printf("%d ", sum);
//     printf("%d", sum1);
// }

// int main() {
//     int num,sum = 0;
//     printf("Enter the final number: ");
//     scanf("%d", &num);
//     for(int i = 1;i <= num;i++)
//     {
//         sum += i;
//         if (i < num)
//         {
//             printf("%d+ ", i);
//         }
//         else
//         {
//             printf("%d= ", i);
//         }
//     }
//     printf("%d ", sum);
// }

// int main()
// {
//     int num, sum = 0;
//     printf("Enter the final number: ");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//             if (i < num)
//             {
//                 printf("%d+ ", i);
//             }
//             else
//             {
//                 printf("%d= ", i);
//             }
//         }
//         else
//         {
//             continue;
//         }
        
//     }
//     printf("%d ", sum);
// }