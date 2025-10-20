#include <stdio.h>
#include <ctype.h>
void removeVowels(char str[], int size)
{
    int idx = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            str[idx] = str[i];
            idx++;
        }
    }
    str[idx] = '\0';
    printf("String without vowels is : ");
    printf("%s\n", str);
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
    removeVowels(str, size);
    return 0;
}