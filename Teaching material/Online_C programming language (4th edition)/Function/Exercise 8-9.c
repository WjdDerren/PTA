// 习题8-9 分类统计各类字符个数

#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount(char *s)
{
    int big = 0, small = 0, blank = 0, digit = 0, other = 0;
    int i = 0;
    while(s[i] != '\0') {
        if(s[i] >= '0' && s[i] <= '9') {
            digit++;
        } else if(s[i] >= 'a' && s[i] <= 'z') {
            small++;
        } else if(s[i] >= 'A' && s[i] <= 'Z') {
            big++;
        } else if(s[i] == ' ') {
            blank++;
        } else{
            other++;
        }
        i++;
    }
    printf("%d %d %d %d %d\n",big, small, blank, digit, other);
}