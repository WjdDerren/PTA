// 输出学生成绩（动态分配）：输入学生人数后输入每个学生的成绩，
// 最后输出学生的平均成绩、最高成绩和最低成绩。
// 要求使用动态内存分配来实现。

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, sum = 0, average, max, min;
    scanf("%d", &num);
    
    int *stu_mark = (int *)malloc(sizeof(int) * num);
    scanf("%d", &stu_mark[0]);
    max = stu_mark[0];
    min = stu_mark[0];
    sum = stu_mark[0];
    for(i = 1; i < num; i++) {
        scanf("%d", &stu_mark[i]);
        if(min > stu_mark[i]) {
            min = stu_mark[i];
        }
        if(max < stu_mark[i]) {
            max = stu_mark[i];
        }
        sum += stu_mark[i];
    }

    printf("Average is %lf.\n", sum * 1.0 / num);
    printf("Max is %d.\n", max);
    printf("Min is %d.\n", min);

    return 0;
}