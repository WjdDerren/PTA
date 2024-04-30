// 习题10-1 判断满足条件的三位数

#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
        
    return 0;
}


/* 你的代码将被嵌在这里 */
int search(int n)
{
    int a, b, c, flag, count = 0;

    for(int i = 11; i * i <= n; i++) {
        a = i * i % 10;
        b = (i * i % 100) / 10;
        c = i * i / 100;
        flag = 0;
        if(a == b) {
            flag++;
        }
        if(a == c) {
            flag++;
        }
        if(b == c) {
            flag++;
        }
        if(flag == 1) {
            count++;
        }
    }
    
    return count;
}