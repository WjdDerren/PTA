// 本题要求实现函数，可以根据下表查找到星期，返回对应的序号。
// 函数getindex应返回字符串s序号。
// 如果传入的参数s不是一个代表星期的字符串，则返回-1。

#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];
    
    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int getindex( char *s ) {
    int index = -1;
    if(strcmp(s, "Sunday") == 0) {
        index = 0;
    } else if(strcmp(s, "Monday") == 0) {
        index = 1;
    } else if(strcmp(s, "Tuesday") == 0) {
        index = 2;
    } else if(strcmp(s, "Wednesday") == 0) {
        index = 3;
    } else if(strcmp(s, "Thursday") == 0) {
        index = 4;
    } else if(strcmp(s, "Friday") == 0) {
        index = 5;
    } else if(strcmp(s, "Saturday") == 0) {
        index = 6;
    }
    return index;
}