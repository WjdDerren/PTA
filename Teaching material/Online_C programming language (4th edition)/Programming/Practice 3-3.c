// 练习3-3 统计学生平均成绩与及格人数

#include <stdio.h>

int main()
{
    int N, score, count = 0;
    double average = 0;
    scanf("%d", &N);

    if(N == 0) {
        printf("average = 0.0\ncount = 0\n");
        return 0;
    }
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &score);
        average += score;
        if(score >= 60) {
            count++;
        }
    }
    average /= N;

    printf("average = %.1lf\ncount = %d\n", average, count);

    return 0;
}