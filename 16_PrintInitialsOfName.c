/* John Den  ->  J.D. */

#include <stdio.h>
#include <string.h>
void nameIinitials(char str[], int size)
{
    printf("Initials of your name are ");
    printf("%c.", str[0]);
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            printf("%c.\n", str[i + 1]);
        }
    }
    return;
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    fgets(str, 40, stdin);
    str[strcspn(str, "\n")] = '\0';

    /* size of string */
    int idx = 0;
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    nameIinitials(str, size);
    return 0;
}