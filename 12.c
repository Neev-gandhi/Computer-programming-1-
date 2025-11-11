#include <stdio.h>

int main()
{
    char s[100];
    int a = 0, e = 0, i_v = 0, o = 0, u = 0;  // counters for vowels

    printf("Enter a string:\n");
    gets(s);  // basic input

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        // convert uppercase to lowercase manually (if needed)
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        // check vowels
        if (ch == 'a')
            a++;
        else if (ch == 'e')
            e++;
        else if (ch == 'i')
            i_v++;
        else if (ch == 'o')
            o++;
        else if (ch == 'u')
            u++;
    }

    printf("\nFrequency of each vowel:\n");
    printf("a = %d\n", a);
    printf("e = %d\n", e);
    printf("i = %d\n", i_v);
    printf("o = %d\n", o);
    printf("u = %d\n", u);

    return 0;
}
