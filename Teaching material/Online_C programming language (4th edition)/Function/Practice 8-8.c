// 练习8-8 移动字母

#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
    
    return 0; 
}

/* 你的代码将被嵌在这里 */
void Shift(char s[])
{
    /* 循环做
    int temp;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < strlen(s) - 1; j++) {
            temp = s[j];
            s[j] = s[j + 1];
            s[j + 1] = temp;
        }
    }*/

    char res[1000], temp[4];

    strncpy(res, s + 3, strlen(s) - 3);
    res[strlen(s) - 3] = '\0';

    strncpy(temp, s, 3);
    temp[3] = '\0';
    
    strcat(res, temp);
    strcpy(s, res);
}