#include <stdio.h>
/* main */
int main() {
    int i, sum = 0;             // define
    for(i = 1; i <= 10; i++) {  // for 
        sum += i;               // add
    }

    /*
    YES!
    */

    printf("sum:%d\n", sum);

    return 0;
}