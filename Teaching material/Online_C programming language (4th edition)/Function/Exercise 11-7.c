// 本题要求实现两个函数，分别将读入的数据存储为单链表、
// 将链表中奇数值的结点重新组成一个新的链表。

// 函数readlist从标准输入读入一系列正整数，按照读入顺序建立单链表。
// 当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。

// 函数getodd将单链表L中奇数值的结点分离出来，重新组成一个新的链表。
// 返回指向新链表头结点的指针，
// 同时将L中存储的地址改为删除了奇数值结点后的链表的头结点地址（所以要传入L的指针）。

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist() {
    struct ListNode *L = NULL, *p;
    int x;
    
    while(1) {
        scanf("%d", &x);
        if(x == -1) {
            break;
        }

        struct ListNode *q = (struct ListNode *)malloc(sizeof(struct ListNode));
        q->data = x;
        q->next = NULL;
        if(L == NULL) {
            L = q;
            p = L;
        } else {
            p->next = q;
            p = q;
        }
    }

    return L;
}

struct ListNode *getodd( struct ListNode **L ) {
    struct ListNode *Odd = NULL, *Even = NULL, *p = *L, *p_Even = Even, *p_Odd = Odd;

    while(p != NULL) {
        if(p->data % 2 != 0) {
            if(Odd == NULL) {
                Odd = p;
                p_Odd = Odd;
            } else {
                p_Odd->next = p;
                p_Odd = p;
            }
        } else {
            if(Even == NULL) {
                Even = p;
                p_Even = Even;
            } else {
                p_Even->next = p;
                p_Even = p;
            }
        }
        p = p->next;
    }

    if(p_Odd != NULL) {
        p_Odd->next = NULL;
    }
    if(p_Even != NULL) {
        p_Even->next = NULL;
    }
    *L = Even;

    return Odd;
}