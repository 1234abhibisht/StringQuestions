#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void anagramStrings(char str1[], char str2[], int size1, int size2)
{
    if (size1 != size2)
    {
        printf("Strings are not anargams\n");
    }
    else
    {
        bool flag = true;
        for (int i = 0; i <= size1 - 1; i++)
        {
            if (str1[i] != str2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            printf("Strings are anargams\n");
        }
        else
        {
            printf("Strings are not anargams\n");
        }
    }
    return;
}
int main()
{
    char str1[40];
    printf("Enter first string : ");
    fgets(str1, 40, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    char str2[40];
    printf("Enter second string : ");
    fgets(str2, 40, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    /* size of first string */
    int idx1 = 0;
    int size1 = 0;
    while (str1[idx1] != '\0')
    {
        size1++;
        idx1++;
    }

    /* size of second string */
    int idx2 = 0;
    int size2 = 0;
    while (str2[idx2] != '\0')
    {
        size2++;
        idx2++;
    }

    /* bubble sort first string */
    for (int i = 0; i <= size1 - 2; i++)
    {
        for (int j = 0; j <= size1 - 2 - i; j++)
        {
            if (str1[j] > str1[j + 1])
            {
                int temp = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = temp;
            }
        }
    }

    /* bubble sort second string */
    for (int i = 0; i <= size2 - 2; i++)
    {
        for (int j = 0; j <= size2 - 2 - i; j++)
        {
            if (str2[j] > str2[j + 1])
            {
                int temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }

    /* pass sorted strings to function */
    anagramStrings(str1, str2, size1, size2);
    return 0;
}