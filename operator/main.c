#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 1. write c program to calculate delta (b^2 - 4*a*c).
/*int main()
{
    int a,b,c,delta;

    printf("Enter the value for a: ");
    scanf("%d",&a);
    printf("Enter the value for b: ");
    scanf("%d",&b);
    printf("Enter the value for c: ");
    scanf("%d",&c);

    delta = pow(b,2) - (4*a*c);

    printf("Delta: %d",delta);
}*/

// 2. write c program to convert second to hour,min,sec in format %dH %dmin %dsec.
int main()
{
    int h,min,sec,s;
    printf("Enter the second: ");
    scanf("%d",&s);

    h = s/3600;
    min = (s - h*3600) / 60;
    sec = s - ((h*3600)+(min*60));

    printf("%dhour  %dminute  %dsecond",h,min,sec);
}

// 3. write c program to compute addition of 2 number and find average.
/*int main()
{
    int a,b,sum;
    float avg;
    printf("Enter the number for a: ");
    scanf("%d",&a);
    printf("Enter the number for b: ");
    scanf("%d",&b);

    sum = a+b;
    avg = (sum*1.00)/2;

    printf("The addition is %d and the average is %.2f.",sum,avg);
}*/

/*5. Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour.
Print the employee's ID and salary (with two decimal places) of a particular month. */
/*int main()
{
    int id,hourly_sal,hour;
    float salary;

    printf("Enter employee's ID: ");
    scanf("%d",&id);
    printf("Hour that employee work in a month: ");
    scanf("%d",&hour);
    printf("Hourly pay for employee: ");
    scanf("%d",&hourly_sal);

    salary = (hourly_sal*1.00)*hour;

    printf("Employee's ID: %d.\n",id);
    printf("Salary = %.2f US dollar.",salary);
}*/

