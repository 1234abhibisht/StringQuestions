#include <stdio.h>
#include <string.h>
void longestWord(char str[], int size)
{
    int count = 0;
    int maxcount = 0;
    char currentWord[40];
    int idx1 = 0;
    char longestWord[40];
    for (int i = 0; i <= size; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            count++;
            currentWord[idx1] = str[i];
            idx1++;
        }
        else
        {
            currentWord[idx1] = '\0';
            if (count > maxcount)
            {
                maxcount = count;
                strcpy(longestWord, currentWord);
                count = 0;
                idx1 = 0;
            }
        }
    }
    printf("Longest word is %s\n", longestWord);
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
    longestWord(str, size);
    return 0;
}