// 有序表的增删改查。首先输入一个无重复元素的、从小到大排列的有序表，
// 并在屏幕上显示以下菜单，
// 用户可以反复对该有序表进行插入、删除、修改和查找操作，也可以选择结束。
// 当用户输入编号 1-4 和相关参数时，
// 将分别对该有序表惊醒插入、删除、修改和查找操作，输入其他编号，则结束操作。
// [1] Insert
// [2] Delete
// [3] Modify
// [4] Query
// [Other option] End

#include <stdio.h>

void Menu() {
    printf("[1] Insert\n");
    printf("[2] Delete\n");
    printf("[3] Modify\n");
    printf("[4] Query\n");
    printf("[Other option] End\n");
    printf("Please input the index of operation: ");
}

void Print(int A[], int *p) {
    for(int i = 0; i < *p - 1; i++) {
        printf("%d ", A[i]);
    }
    printf("%d\n", A[*p - 1]);
}

void Insert(int A[], int *p, int x) {
    // [1] Insert
    if(*p == 10) {
        printf("The Array is full! Please Choose other index of operation\n");
        return;
    }
    int i;
    for(i = *p; i >= 1 && A[i - 1] > x; i--) {
        A[i] = A[i - 1];
    }
    A[i] = x;
    (*p)++;
    Print(A, p);
}

void Delete(int A[], int *p, int x) {
    // [2] Delete
    int flag = 0, i, j;
    for(i = 0; i < *p; i++) {
        if(A[i] != x) {
            A[j++] = A[i];
        } else {
            flag++;
        }
    }
    if(flag != 0) {
        printf("Delete success!\n");
        (*p) = (*p) - flag;
        Print(A, p);
    } else {
        printf("No found!\n");
    }
}

void Modify(int A[], int *p, int index, int x) {
    // [3] Modify
    if(index >= 0 && index <= *p) {
        A[index - 1] = x;
        printf("Modify success!\n");
        Print(A, p);
    } else {
        printf("subcript is wrong\n");
    }
}

void Query(int A[], int *p, int x) {
    // [4] Query
    for(int i = 0; i < *p; i++) {
        if(A[i] == x) {
            printf("%d is in %d", x, i + 1);
            return;
        }
    }
    printf("Not found!\n");
}

int main() {
    int i, choose, len = 0, A[10], insertNum, delectNum, modifyID, modifyNum, query_x;

    printf("Input the num of array(up to 10): ");
    scanf("%d", &len);
    for(i = 0; i < len; i++) {
        scanf("%d", &A[i]);
    }

    while(1) {
        Menu();

        scanf("%d", &choose);
        switch(choose) {
            case 1: //[1] Insert
                printf("Input the num want to insert: ");
                scanf("%d", &insertNum);
                Insert(A, &len, insertNum);
                break;
            case 2: // [2] Delete
                if(len == 0) {
                    printf("The array is empty, please insert first!\n");
                } else {
                    printf("Input the num which want to delete: ");
                    scanf("%d", &delectNum);
                    Delete(A, &len, delectNum);
                }
                break;
            case 3: // [3] Modify
                printf("Input the subscript of number which want to modify, and the modified num: ");
                scanf("%d %d", &modifyID, &modifyNum);
                Modify(A, &len, modifyID, modifyNum);
                break;
            case 4: // [4] Query
                printf("Input the num which want to query: ");
                scanf("%d", &query_x);
                Query(A, &len, query_x);
                break;
            default: return 0;
        }
    }


    return 0;
}