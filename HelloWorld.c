#include <stdio.h>
#include <math.h>


int main()
{
    char s[] = "china", *ps = s;
    printf("s[5] = %c\n", s[4]);
    printf("s[6] = %c\n", s[5]);

    printf("ps[0] = %c\n", ps[0]);
    printf("ps[0] + 3 = %c\n", *ps + 3);
    printf("ps[3] = %c\n", *(ps + 3));
    printf("ps = %s\n", ps);

    int a[] = {5,4,3,2,1}, *pa = a;
    printf("pa[0] = %d\n", *pa);
    printf("pa[0] + 3 = %d\n", *pa + 3);
    printf("pa[3] = %d\n", *(pa + 3));
    return 0;
}
