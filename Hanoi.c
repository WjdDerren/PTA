// 从 A -> C
// int hanoi(int n, 起始, 中间, 目标)
#include <stdio.h>

int hanoi(int n, char a, char b, char c) {
    int count = 0;
    if(n == 1) {
        printf("%c -> %c\n", a, c);
        count++;
    } else {
        hanoi(n - 1, a, c, b);
        printf("%c -> %c\n", a, c);
        count++;
        hanoi(n - 1, b, a, c);
    }
}

int main() {
    int n;
    printf("Input the number of disk: ");
    scanf("%d", &n);
    printf("The steps for %d disk are:\n", n);

    int count = hanoi(n, 'A', 'B', 'C');

    printf("The number of moveing is %d\n", count);

    return 0;
}