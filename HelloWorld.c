#include <stdio.h>
#include <math.h>

void change(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main()
{
    int a = 2, b = 3;
    int *pa = &a, *pb = &b;
    printf("Before a = %d, b = %d\n", a, b);
    change(pa, pb);
    printf("After a = %d, b = %d\n", a, b);
    return 0;
}
