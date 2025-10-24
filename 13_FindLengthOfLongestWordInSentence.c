#include <stdio.h>
#include <string.h>
int longestWord(char str[], int size)
{
    int count = 0;
    int maxcount = 0;
    for (int i = 0; i <= size; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            count++;
        }
        else
        {
            if (count > maxcount)
            {
                maxcount = count;
                count = 0;
            }
        }
    }
    return maxcount;
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
    printf("Length of longest word in sentence is %d\n", longestWord(str, size));
    return 0;
}