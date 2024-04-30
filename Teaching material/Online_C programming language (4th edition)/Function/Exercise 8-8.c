// 习题8-8 判断回文字符串

#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];
    
    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome(char *s)
{
    int len = strlen(s), i, j;
    for(i = 0, j = len - 1; i < len / 2; i++, j--) {
        if(s[i] != s[j]) {
            return false;
        }
    }
    return true;
}