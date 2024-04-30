// 习题7-5 找鞍点

#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[6][6];

    scanf("%d", &n);
    for(i = 0; i < n; ++i) {
        for(j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int saddle_row = -1, saddle_col = -1;
    for(i = 0; i < n; ++i) {
        for(j = 0; j < n; ++j) {
            int max_in_row = 1, min_in_col = 1;
            for(int k = 0; k < n; ++k) {
                if(matrix[i][k] > matrix[i][j]) {
                    max_in_row = 0;
                    break;
                }
            }
            for(int k = 0; k < n; ++k) {
                if(matrix[k][j] < matrix[i][j]) {
                    min_in_col = 0;
                    break;
                }
            }
            if(max_in_row && min_in_col) {
                saddle_row = i;
                saddle_col = j;
                break;
            }
        }
    }

    if(saddle_row != -1 && saddle_col != -1) {
        printf("%d %d", saddle_row, saddle_col);
    } else{
        printf("NONE");
    }

    return 0;
}