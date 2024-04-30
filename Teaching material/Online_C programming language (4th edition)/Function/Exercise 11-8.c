// 习题11-8 单链表结点删除

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist()
{
    struct ListNode *L = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p = L;
    int x;

    scanf("%d", &x);
    if(x == -1) {
        L = NULL;
        return L;
    }
    L->data = x;
    p = L;
    while(1) {
        scanf("%d", &x);
        if(x == -1) {
            break;
        }
        struct ListNode *q = (struct ListNode *)malloc(sizeof(struct ListNode));
        q->data = x;
        p->next = q;
        p = q;
    }
    p->next = NULL;

    return L;
}

struct ListNode *deletem(struct ListNode *L, int m)
{
    struct ListNode *p;
    struct ListNode *q;

    while(L && L->data == m) {
        L = L->next;
    }
    if(L == NULL) {
        return L;
    }
    
    p = L;
    q = L->next;
    
    while(q) {
        if(q->data == m) {
            p->next = q->next;
            free(q);
            q = p->next;
        } else {
            p = q;
            q = p->next;
        }
    }
    
    return L;
}