// 习题6-7 简单计算器

#include <stdio.h>

int main()
{
    char op;
    int n1, n2, flag = 0;
    scanf("%d", &n1);

    while(1) {
        scanf("%c", &op);
        if(op == '=') {
            printf("%d\n", n1);
            break;
        }
        if(op != '+' && op != '-' && op != '*' && op != '/') {
            printf("ERROR\n");
            break;
        }
        scanf("%d", &n2);
        switch(op) {
            case '+': n1 += n2; break;
            case '-': n1 -= n2; break;
            case '*': n1 *= n2; break;
            case '/': 
                if(n2 == 0) {
                    printf("ERROR\n");
                    flag = 1;
                    break;
                }
                n1 /= n2; break;
        }
        if(flag == 1) {
            break;
        }
    }
    
    return 0;
}