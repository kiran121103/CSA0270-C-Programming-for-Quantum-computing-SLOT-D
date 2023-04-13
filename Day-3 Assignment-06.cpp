#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int areAnagrams(char str1[], char str2[]);
int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    if (areAnagrams(str1, str2))
    {
        printf("%s and %s are anagrams.", str1, str2);
    }
    else
    {
        printf("%s and %s are not anagrams.", str1, str2);
    }
    return 0;
}
int areAnagrams(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        return 0;
    }
    int freq[26] = {0};
    for (int i = 0; i < len1; i++)
    {
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return 0;
        }
    }

    return 1;
}

