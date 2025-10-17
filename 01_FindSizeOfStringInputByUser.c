#include <stdio.h>
int size(char str[])
{
    int idx = 0; /* index of string */
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    return size;
}
int main()
{
    char str[40];
    printf("Enter your string : ");
    scanf("%[^\n]s", str);
    printf("Size of string is %d\n", size(str));
    return 0;
}