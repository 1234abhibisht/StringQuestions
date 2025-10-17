#include <stdio.h>
void reverseString(char str[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string is : ");
    printf("%s ", str);
    return;
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    scanf("%[^\n]s", str);
    int idx = 0; /* index of string */
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    reverseString(str, size);
    return 0;
}