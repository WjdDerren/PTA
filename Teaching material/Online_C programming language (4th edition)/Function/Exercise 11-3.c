// 习题11-3 计算最长的字符串长度

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 10
#define MAXS 20

int max_len( char *s[], int n );

int main()
{
    int i, n;
    char *string[MAXN] = {NULL};
    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        string[i] = (char *)malloc(sizeof(char)*MAXS);
        scanf("%s", string[i]);
    }
    printf("%d\n", max_len(string, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int max_len( char *s[], int n ) {
    int max = strlen(s[0]);
    
    for(int i = 1; i < n; i++) {
        if(max < strlen(s[i])) {
            max = strlen(s[i]);
        }
    }

    return max;
}