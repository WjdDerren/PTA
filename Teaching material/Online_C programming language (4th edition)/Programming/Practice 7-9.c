// 练习7-9 计算天数

#include <stdio.h>

int Check(int year) {
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    }
    return -1;
}

int main() {
    int year, month, day, sum = 0;
    
    scanf("%d/%d/%d", &year, &month, &day);

    int date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for(int i = 0; i < month - 1; i++) {
        sum += date[i];
    }
    sum += day;
    if(Check(year) == 1 && month >= 3) {
        sum += 1;
    }
    
    printf("%d", sum);

    return 0;
}