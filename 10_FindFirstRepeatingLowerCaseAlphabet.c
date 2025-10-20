#include <stdio.h>
int repeatingAlphabet(char str[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        for (int j = i + 1; j <= size - 1; j++)
        {
            if (str[i] == str[j])
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    return str[i];
                }
            }
        }
    }
    return '0';
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
    char repeat = repeatingAlphabet(str, size);
    if (repeat == '0')
    {
        printf("No repeating alphabet found\n");
    }
    else
    {
        printf("Repeating alphabet is %c\n", repeat);
    }
    return 0;
}