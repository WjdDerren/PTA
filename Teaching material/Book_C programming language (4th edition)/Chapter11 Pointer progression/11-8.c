// 删除结点：输入若干个正整数（输入 -1 为结束标志）建立一个单向链表，
// 再输入一个整数 m，删除链表中值为 m 的所有节点。

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *initialization(struct ListNode *head) {
    int x;

    printf("Input the num until -1:\n");
    scanf("%d", &x);
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->data = x;
    head = newNode;
    struct ListNode *p = head;

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

struct ListNode *deleteX(struct ListNode *head, int x) {
    struct ListNode *p = head, *q;
    while(head != NULL && head->data == x) {
        p = head;
        head = head->next;
        free(p);
    }
    if(head == NULL) {
        return NULL;
    }

    q = head;
    p = head->next;
    while(p) {
        if(p->data == x) {
            q->next = p->next;
            free(p);
        } else {
            q = p;
        }
        p = q->next;
    }
    
    return head;
}

void Print(struct ListNode *head) {
    struct ListNode *p = head;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main() {
    struct ListNode *head = NULL;

    head = initialization(head);
    Print(head);
    int x;
    printf("\nInput the num which you want to delete: ");
    scanf("%d", &x);
    printf("\nAfter deal:\n");
    head = deleteX(head, x);
    Print(head);

    return 0;
}