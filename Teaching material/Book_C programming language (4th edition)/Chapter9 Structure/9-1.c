// 时间换算：用结构类型表示时间内容（时、分、秒表示），
// 输入一个时间数值，再输入一个秒数 n(n<60)，
// 以 h: m: s的格式输出该时间再过 n 秒后的时间值
// （超过 24 点就从 0 点开始计时）

#include <stdio.h>

typedef struct time {
    int hour, minute, second;
} Time;

void add_second(Time *t, int n) {
    if(t->second + n >= 60) {
        t->second %= 60;
        t->minute++;
        if(t->minute >= 60) {
            t->minute %= 60;
            t->hour++;
            if(t->hour >= 24) {
                t->hour %= 24;
            }
        }
    }
}

int main() {
    Time t;
    int n;
    
    printf("Input the Time(h m s): ");
    scanf("%d %d %d", &t.hour, &t.minute, &t.second);
    printf("Input the second n: " );
    scanf("%d", &n);

    add_second(&t, n);

    printf("After %d second, now is %d: %d: %d\n", n, t.hour, t.minute, t.second);

    return 0;
}