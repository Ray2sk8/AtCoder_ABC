/***
 * https://atcoder.jp/contests/abc051/submissions/34449512
 * 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    scanf("%s", s);
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ',')
            s[i] = ' ';
        i++;
    }
    printf("%s", s);

    return 0;
}