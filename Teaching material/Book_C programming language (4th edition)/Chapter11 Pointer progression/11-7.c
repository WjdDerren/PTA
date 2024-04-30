// 奇数值节点链表：输入若干个正整数（输入 -1 为结束标志）建立一个单向链表，
// 头指针为 L，将链表 L 中奇数值的节点重新组成一个新的链表 NEW，
// 并输出新建链表的信息。

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *initialization(struct ListNode *head) {
    head = NULL;
    struct ListNode *p;
    int x;

    printf("Input the num until -1:\n");
    scanf("%d", &x);
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->data = x;
    head = newNode;
    p = head;
    while(1) {
        scanf("%d", &x);
        if(x == -1) {
            break;
        }
        struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->data = x;
        p->next = newNode;
        p = newNode;
    }
    p->next = NULL;

    return head;
}

struct ListNode *getOdd(struct ListNode *head) {
    struct ListNode *NEW = NULL;
    struct ListNode *p_NEW = NULL, *p_head = head;

    while(p_head != NULL) {
        if(p_head->data % 2 != 0) {
            if(NEW == NULL) {
                NEW = p_head;
                p_NEW = NEW;
            } else {
                p_NEW->next = p_head;
                p_NEW = p_head;
            }
        }
        p_head = p_head->next;
    }

    return NEW;
}

void Print(struct ListNode *head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct ListNode *L, *NEW;

    L = initialization(L);
    Print(L);
    printf("\nAfter deal:\n");
    NEW = getOdd(L);
    Print(NEW);

    return 0;
}