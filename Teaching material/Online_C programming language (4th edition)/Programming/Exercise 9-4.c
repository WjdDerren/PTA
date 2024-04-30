// 习题9-4 查找书籍

#include <stdio.h>

typedef struct BookAndMoney {
    char name[31];
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
    printf("%.2lf, %s\n", bo[i_max].money, bo[i_max].name);
    printf("%.2lf, %s\n", bo[i_min].money, bo[i_min].name);
}

int main() {
    Book bo[11];
    int i, n;
    
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++) {
        fgets(bo[i].name, sizeof(bo[i].name), stdin);
        bo[i].name[strcspn(bo[i].name, "\n")] = '\0';
        scanf("%lf", &bo[i].money);
        getchar();
    }

    Find(bo, n);

    return 0;
}