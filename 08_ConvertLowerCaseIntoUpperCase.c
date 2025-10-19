#include <stdio.h>
void toggleCase(char str[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
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
    ToggleCase(str, size);
    printf("%s\n", str);
    return 0;
}