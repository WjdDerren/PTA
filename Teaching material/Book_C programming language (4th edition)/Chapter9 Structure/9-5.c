// 通讯录排序：建立一个通讯录，通讯录的结构记录包括：
// 姓名、生日、电话号码；其中生日又包括三项：年、月、日。
// 编写程序，定义一个嵌套的结构类型，输入 n(n<10) 个联系人的信息，
// 再按照他们的年龄从大到小的顺序依次输出其信息。

#include <stdio.h>
#include <string.h>

typedef struct birthday {
    int year, month, date;
    char sBirthday[11];
} day;

typedef struct AddressBook {
    char name[10], tel[15];
    day bd;
} AB;

void sort(AB *person, int n) {
    int i, j, i_min;
    AB temp;

    for(i = 0; i < n - 1; i++) {
        i_min = i;
        for(j = i; j < n - i; j++) {
            if(strcmp(person[i_min].bd.sBirthday, person[j].bd.sBirthday) > 0) {
                i_min = j;
            }
        }
        if(i_min != i) {
            temp = person[i_min];
            person[i_min] = person[i];
            person[i] = temp;
        }
    }
}

void Print(AB person[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("No.%d: %-10s %4d-%2d-%2d %12s\n", i + 1, person[i].name, person[i].bd.year, person[i].bd.month, person[i].bd.date, person[i].tel);
    }
}

int main() {
    AB person[10];
    int i, n;
    printf("Input the num of person: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Input the No.%d person's name, birthday, tel:\n", i+ 1);
        scanf("%s %d %d %d %s", person[i].name, &person[i].bd.year, &person[i].bd.month, &person[i].bd.date, person[i].tel);
        sprintf(person[i].bd.sBirthday, "%d%d%d", person[i].bd.year, person[i].bd.month, person[i].bd.date);
    }

    sort(person, n);

    Print(person, n);

    return 0;
}