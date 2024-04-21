// 循环右移：有 n 个整数，使前面各数顺序向后移 m 个位置，移出的数再从开头移入。
// 编写一个函数实现以上功能，在主函数中输入 n 个整数并输出调整后的 n 个数。

#include <stdio.h>

void change(int a[], int left, int right) {
    while(left < right) {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int n, a[10], m, i, j, temp;

    printf("Input n, m: ");
    scanf("%d %d", &n, &m);
    printf("Input %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    m %= n;
    change(a, 0, n - 1);
    change(a, 0, m - 1);
    change(a, m, n - 1);

    printf("After deal: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}