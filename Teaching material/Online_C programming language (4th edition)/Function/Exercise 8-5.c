// 习题8-5 使用函数实现字符串部分复制

#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy(char *t, int m, char *s)
{
    int flag = 0, i, j;
    for(i = m - 1, j = 0; t[i] != '\0'; i++, j++) {
        s[j] = t[i];
        if(j >= MAXN) {
            flag = 1;
            s[0] = '\0';
            break;
        }
    }
    if(flag == 0) {
        s[j] = '\0';
    }
}