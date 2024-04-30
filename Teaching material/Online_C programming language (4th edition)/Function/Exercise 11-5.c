// 习题11-5 指定位置输出字符串

#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *match( char *s, char ch1, char ch2 ) {
    int i = 0, flag = 0, i_res = -1;

    while(*(s + i) != '\0') {
        if(flag == 0 && *(s + i) == ch1) {
            flag = 1;
            i_res = i;
        }
        if(flag == 1) {
            printf("%c", *(s + i));
        }
        if(flag == 1 && *(s + i) == ch2) {
            break;
        }
        i++;
    }
    printf("\n");

    if(i_res == -1) {
        return s + i;
    }
    return s + i_res;
}