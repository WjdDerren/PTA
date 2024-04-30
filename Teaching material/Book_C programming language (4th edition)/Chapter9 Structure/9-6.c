// 按等级统计学生成绩：
// 输入 10 个学生的学号、姓名和成绩，输出学生的成绩等级和不及格人数。
// 每个学生的记录包括学号、姓名、成绩和等级，要求定义和调用函数 set_grade()，
// 根据学生成绩设置等级，并统计不及格人数。
// A：85-100， B：70-84，C：60-69，D:0-59

#include <stdio.h>

struct student {
    char No[10], name[10], Level;
    int grade;
};

int change(struct student *stu, int n) {
    int D_num = 0;

    for(int i = 0; i < n; i++) {
        if(stu[i].grade >= 85) {
            stu[i].Level = 'A';
        } else if(stu[i].grade >= 70) {
            stu[i].Level = 'B';
        } else if(stu[i].grade >= 60) {
            stu[i].Level = 'C';
        } else {
            stu[i].Level = 'D';
            D_num++;
        }
    }
    return D_num;
}

void Print(struct student stu[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%-8s %-10s %-4d %-4c\n", stu[i].No, stu[i].name, stu[i].grade, stu[i].Level);
    }
}

int main() {
    struct student stu[3];

    int i, n = 3;
    for(i = 0; i < n; i++) {
        printf("Input No.%d's No, name, grade:\n", i + 1);
        scanf("%s %s %d", stu[i].No, stu[i].name, &stu[i].grade);
    }

    int D_num = change(stu, n);

    Print(stu, n);

    printf("D_num is %d\n", D_num);
    
    return 0;
}