#include <stdio.h>
#include <stdlib.h>

//구조체 선언
typedef struct ListNode{
    int data;
    struct ListNode *link;
}ListNode;

int main(){
    ListNode *head = NULL, *tail = NULL;

    //노드 생성 , 공간할당
    ListNode *a = (ListNode*)malloc(sizeof(ListNode));
    a -> data = 10;
    a -> link = NULL;

    ListNode *b = (ListNode*)malloc(sizeof(ListNode));
    b -> data = 20;
    b -> link = NULL;

    ListNode *c = (ListNode*)malloc(sizeof(ListNode));
    c -> data = 30;
    c -> link = NULL;

    ListNode *d = (ListNode*)malloc(sizeof(ListNode));
    d -> data = 40;
    d -> link = NULL;

    head = a;
    a -> link = b;
    b -> link = c;
    c -> link = d;


    ListNode *e = (ListNode*)malloc(sizeof(ListNode));
    e -> data = 99;
    e -> link = NULL;


    e -> link = b -> link;
    b -> link = e;

    int temp = 99;
    if(e -> data == temp){
        ListNode *f = (ListNode*)malloc(sizeof(ListNode));
        f -> data = 777;
        f -> link = NULL;

        f -> link = e -> link;
        e -> link = f;
    }

    ListNode *pt;
    for(pt = head; pt!=NULL; pt=pt -> link){
        printf("%d -> ",pt -> data);
    }
    printf("NULL");
}