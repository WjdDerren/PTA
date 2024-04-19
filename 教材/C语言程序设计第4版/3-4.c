// 统计学生成绩：输入一个正整数n，再输入n个学生的成绩，统计五分制成绩的分布。
// A: >= 90 
// B: >= 80 && < 90
// C: >= 70 && < 80
// D: >= 60 && < 70
// E: < 60

#include <stdio.h>

int main() {
    int n, A = 0, B = 0, C = 0, D = 0, E = 0, score;

    printf("Please input the number of student:");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        printf("请输入第 %d/%d 个学生的成绩: ", i, n);
        scanf("%d", &score);
        printf("输入的百分制成绩 %d 所对应的五分制成绩为: ", score);
        switch(score / 10){
            case 1: case 2: case 3: case 4: case 5: 
                printf("E\n");
                E++;
                break;
            case 6:
                printf("D\n");
                D++;
                break;
            case 7:
                printf("C\n");
                C++;
                break;
            case 8:
                printf("B\n");
                B++;
                break;
            case 9: case 10:
                printf("A\n");
                A++;
                break;
        }
    }

    printf("统计结果:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);
    printf("C: %d\n", C);
    printf("D: %d\n", D);
    printf("E: %d\n", E);

    return 0;
}