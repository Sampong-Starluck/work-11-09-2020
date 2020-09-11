#include <stdio.h>
#include <stdlib.h>

int main() {
    char alp;
    printf("Enter the character or number: ");
    scanf("%c", &alp);
    if (alp <= 48 && alp >= 57)
    {
        printf("%c is a number.\n", alp);
    }
    else if (alp <= 65 && alp >= 90)
    {
        if (alp == 'A' || alp=='E' || alp == 'I' || alp == 'O' || alp == 'U')
        {
            printf("%c is a vowel in uppercase.\n", alp);
        }
        else
        {
            printf("%c is a consonant in uppercase.\n", alp);
        }
    }
    else if (alp >= 97 && alp <= 122)
    {
        if (alp == 'a' || alp =='e' || alp == 'i' || alp == 'o' || alp == 'u')
        {
            printf("%c is a vowel in lowercase.\n", alp);
        }
        else
        {
            printf("%c is a consonant in lowercase.\n", alp);
        }
    }
    else
    {
        printf("%c is a symbol.\n", alp);
    }
    return 0;
}
