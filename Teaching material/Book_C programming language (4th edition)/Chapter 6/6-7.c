// 简单计算器：模拟简单运算器的工作，输入一个算式（没有空格），遇等号“=”说明输入结束，输出结果。
// 假设计算器只能进行加、减、乘、除运算，运算数和结果都是整数，4种运算符的优先级相同，按从左到右的顺序计算。
// 例如，输入“1+2*10-10/2=”后，输出10。

#include <stdio.h>

int main()
{
    char op;
    int res, x;
    scanf("%d", &x);
    res = x;

    while(1) {
        scanf("%c", &op);
        if(op == '=') {
            break;
        }
        scanf("%d", &x);
        switch(op) {
            case '+': res += x; break;
            case '-': res -= x; break;
            case '*': res *= x; break;
            case '/': res /= x; break;
        }
    }

    printf("%d\n", res);

    return 0;
}