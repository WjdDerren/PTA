// 习题8-10 输出学生成绩

#include <stdio.h>

int main() {
    int n, grade;
    double average, max, min;

    scanf("%d", &n);
    scanf("%d", &grade);
    max = grade;
    min = grade;
    average = grade;
    for(int i = 1; i < n; i++) {
        scanf("%d", &grade);
        if(max < grade) {
            max = grade;
        }
        if(min > grade) {
            min = grade;
        }
        average += grade;
    }

    printf("average = %.2lf\n", average / n);
    printf("max = %.2lf\n", max);
    printf("min = %.2lf\n", min);

    return 0;
}