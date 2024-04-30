// 习题11-1 输出月份英文名

#include <stdio.h>

char *getmonth( int n );

int main()
{
    int n;
    char *s;
    
    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
int getindex( char *s ) {
    char *week[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int index = -1;

    for(int i = 0; i < 7; i++) {
        if(strcmp(week[i], s) == 0) {
            index = i;
            break;
        }
    }
    
    // int index = -1;
    // if(strcmp(s, "Sunday") == 0) {
    //     index = 0;
    // } else if(strcmp(s, "Monday") == 0) {
    //     index = 1;
    // } else if(strcmp(s, "Tuesday") == 0) {
    //     index = 2;
    // } else if(strcmp(s, "Wednesday") == 0) {
    //     index = 3;
    // } else if(strcmp(s, "Thursday") == 0) {
    //     index = 4;
    // } else if(strcmp(s, "Friday") == 0) {
    //     index = 5;
    // } else if(strcmp(s, "Saturday") == 0) {
    //     index = 6;
    // }
    return index;
}