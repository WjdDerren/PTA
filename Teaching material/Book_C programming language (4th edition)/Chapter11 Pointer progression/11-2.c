// 查找星期。定义一个指针数组，将下标的星期信息组织起来，
// 输入一个字符串，在表中查找，若存在，输出该字符串再表中的序号，否则输出 -1。

#include <stdio.h>
#include <string.h>

int main() {
    char str[15], *week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Input the week: ");
    gets(str);

    int i, flag = -1;
    for(i = 0; i < 7; i++) {
        if(strcmp(week[i], str) == 0) {
            flag = i;
            break;
        }
    }

    printf("%d\n", flag);

    return 0;
}