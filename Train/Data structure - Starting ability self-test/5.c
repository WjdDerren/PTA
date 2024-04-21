#include <stdio.h>
#include <string.h>

int main() {
    char deck[54][4];
    char c_word[4] = { 'S', 'H', 'C', 'D' };
    int i, j, i_num = 1;

    for (i = 0; i < 52; i++) {
        sprintf(deck[i], "%c%d", c_word[i / 13], i_num);
        i_num = i_num % 13 + 1;
    }
    strcpy(deck[52], "J1");
    strcpy(deck[53], "J2");

    int repeatTime, order[54];
    scanf("%d", &repeatTime);
    
    for (i = 0; i < 54; i++) {
        scanf("%d", &order[i]);
    }

    char res[54][4];

    for(i = 0; i < 54; i++) {
        int temp = i;
        for(j = 0; j < repeatTime; j++) {
            temp = order[temp] - 1;
        }
        strcpy(res[temp], deck[i]);
    }

    for (i = 0; i < 54; i++) {
        if(i == 0) {
            printf("%s", res[i]);
        } else {
            printf(" %s", res[i]);
        }
    }
    
    return 0;
}