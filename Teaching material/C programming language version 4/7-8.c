// 字符串转换成十进制整数。输入一个以字符“#”结束的字符串，
// 滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串
// 然后将其转换为十进制数后输出。如果过滤后字符串的首字符为“-”，代表该数是负数。

#include <stdio.h>
#include <math.h>

int main()
{
    char str[80], res[80], flag = 1;
    double num = 0, temp;
    int i = 0, j = 0;
    scanf("%[^\n]s", str);

    for(i = 0; str[i] != '#'; i++) {
        if(str[i] == '-' && j == 0) {
            res[j++] = str[i];
        }
        if(str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'f') {
            res[j++] = str[i];
        }
    }
    if(res[0] == '-') {
        flag = -1;
        i = 1;
    } else {
        i = 0;
    }
    j--;
    int k = 0;
    for(; j >= i; j--) {
        if(res[j] >= '0' && res[j] <= '9') {
            temp = res[j] - '0';
        }
        if(res[j] >= 'a' && res[j] <= 'f') {
            temp = res[j] - 'a' + 10;
        }
        num += temp * pow(16, k++);
    }

    printf("%.0lf\n", flag * num);

    return 0;
}