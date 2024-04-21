#include <stdio.h>
#include <string.h>

int main() {
    char num[25], res[25];
    fgets(num, 25, stdin);
    
    int len, i, j = 0, temp1 = 0, temp2 = 0, sum, digit[10] = {0};
    len = strlen(num) - 1;
    for(i = len - 1; i >= 0; i--, j++) {
        digit[num[i] - '0'] = 1;
        sum = (num[i] - '0') * 2;
        temp2 = sum / 10;
        res[j] = sum % 10 + temp1 + '0';
        temp1 = temp2;
        if(i == 0) {
            if(temp1 > 0) {
                res[++j] = temp1 + '0';
            }
        }
    }
    res[j + 1] = '\0';
    j--;
    for(i = 0; i <= j; i++) {
        if(digit[res[i] - '0'] == 0) {
            printf("No\n");
            break;
        }
        if(i != j) {
            
        }
    }
    if(i > j) {
        printf("Yes\n");
    }    
    for(; j >= 0; j--) {
        printf("%c", res[j]);
    }
    
    return 0;
}