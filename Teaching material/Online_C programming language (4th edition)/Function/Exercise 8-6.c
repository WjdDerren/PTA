// 习题8-6 删除字符

#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void delchar(char *str, char c)
{
    int i = 0, j;
    while(str[i] != '\0') {
        if(str[i] == c) {
            for(j = i; str[j + 1] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        } else {
            i++;
        }
    }
}