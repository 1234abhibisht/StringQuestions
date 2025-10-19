#include <stdio.h>
#include <stdbool.h>
void pallindrome(char str[], int i, int j)
{
    bool flag = true;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if (flag == true)
    {
        printf("String is pallindrome\n");
    }
    else
    {
        printf("String is not pallindrome\n");
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
    pallindrome(str, 0, size - 1);
    return 0;
}