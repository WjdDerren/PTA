// 练习3-7 成绩转换

#include <stdio.h>

int main()
{
    int score;
    char ch;

    scanf("%d", &score);
    
    switch(score / 10){
        case 10: case 9:
            ch = 'A';
            break;
        case 8:
            ch = 'B';
            break;
        case 7:
            ch = 'C';
            break;
        case 6:
            ch = 'D';
            break;
        default:
            ch = 'E';
            break;
    }

    printf("%c\n", ch);

    return 0;
}