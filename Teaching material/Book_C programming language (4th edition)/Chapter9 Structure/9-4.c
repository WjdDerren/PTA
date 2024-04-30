// 查找书籍：从键盘输入 10 本书的名称和定价并存入结构数组中，
// 从中查找定价最高和最低的书的名称和定价，并输出。

#include <stdio.h>
#include <string.h>

typedef struct BookAndMoney {
    char name[30];
    double money;
} Book;

void Find(Book bo[], int n) {
    int i, i_max = 0, i_min = 0;
    for(i = 1; i < n; i++) {
        if(bo[i_max].money < bo[i].money) {
            i_max = i;
        }
        if(bo[i_min].money > bo[i].money) {
            i_min = i;
        }
    }
    printf("The Max money of book's name is %s, the money is %lf\n", bo[i_max].name, bo[i_max].money);
    printf("The Min money of book's name is %s, the money is %lf\n", bo[i_min].name, bo[i_min].money);
}

int main() {
    Book bo[10];
    int i, n;
    
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++) {
        printf("Input the No.%d's name: ", i + 1);
        fgets(bo[i].name, sizeof(bo[i].name), stdin);
        // Remove the newline character from fgets result
        bo[i].name[strcspn(bo[i].name, "\n")] = '\0';
        printf("Input the No.%d's money: ", i + 1);
        scanf("%lf", &bo[i].money);
        getchar();
    }

    Find(bo, n);

    return 0;
}