#include <stdio.h>
void vowelsConstants(char str[], int size)
{
    int vowel = 0;
    int constant = 0;
    char vow[40];
    char con[40];
    int idxVow = 0;
    int idxCon = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
            vow[idxVow] = str[i];
            idxVow++;
        }
        else
        {
            constant++;
            con[idxCon] = str[i];
            idxCon++;
        }
    }
    vow[idxVow] = '\0';
    con[idxCon] = '\0';
    printf("Number of vowels in string are %d\n", vowel);
    printf("These vowels are : ");
    int i = 0;
    while (vow[i] != '\0')
    {
        printf("%c ", vow[i]);
        i++;
    }
    printf("\n");
    printf("Number of constants in string are %d\n", constant);
    printf("These constants are : ");
    int j = 0;
    while (con[j] != '\0')
    {
        printf("%c ", con[j]);
        j++;
    }
    return;
}
int main()
{
    char str[40];
    printf("Enter a string : ");
    scanf("%[^\n]s", str);
    int idx = 0;
    int size = 0;
    while (str[idx] != '\0')
    {
        size++;
        idx++;
    }
    vowelsConstants(str, size);
    return 0;
}