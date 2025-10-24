/* I love coding  -> I evol gnidoc */

#include <stdio.h>
#include <string.h>
void reverse(char str[], int i, int j)
{
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    fgets(str, 40, stdin);
    str[strcspn(str, "\n")] = '\0';
    int idx = 0;
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    int a = 0;
    for (int i = 0; i <= size; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverse(str, a, i - 1);
            a = i + 1;
        }
    }
    printf("Reversed sentence is %s\n", str);
    return 0;
}
