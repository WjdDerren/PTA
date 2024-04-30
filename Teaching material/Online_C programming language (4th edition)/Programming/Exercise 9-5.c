//习题9-5 通讯录排序

#include <stdio.h>
#include <string.h>

typedef struct AddressBook {
    char name[15], sBirthday[10], tel[20];
} AB;

void sort(AB *person, int n) {
    int i, j, i_max;
    AB temp;

    for(i = 0; i < n - 1; i++) {
        i_max = i;
        for(j = i + 1; j < n; j++) {
            if(strcmp(person[i_max].sBirthday, person[j].sBirthday) > 0) {
                i_max = j;
            }
        }
        if(i_max != i) {
            temp = person[i_max];
            person[i_max] = person[i];
            person[i] = temp;
        }
    }
}

void Print(AB person[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%s %s %s\n", person[i].name, person[i].sBirthday, person[i].tel);
    }
}

int main() {
    AB person[10];
    int i, n;
    
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s %s %s", person[i].name, person[i].sBirthday, person[i].tel);
    }

    sort(person, n);

    Print(person, n);

    return 0;
}