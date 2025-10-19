#include <stdio.h>
void count(char str[], int size)
{
    int spaces = 0;
    int digits = 0;
    int characters = 0;
    int specialChar = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            characters++;
        }
        else
        {
            specialChar++;
        }
    }
    printf("Number of spaces in string are %d\n", spaces);
    printf("Number of digits in string are %d\n", digits);
    printf("Number of special characters in string are %d\n", specialChar);
    return;
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    scanf("%[^\n]s", str);
    int idx = 0;
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    count(str, size);
    return 0;
}