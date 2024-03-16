#include <stdio.h>
#include <stdlib.h>

//구조체 선언
typedef struct ListNode{
    int data;
    struct ListNode *link;
}ListNode;

ListNode *head = NULL;
ListNode *tail = NULL;
ListNode *pt = NULL;

int reset(){
    head = NULL;
    tail = NULL;

    printf("넣고싶은 숫자 갯수를 입력하세요");
    int n, temp;
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++){
        scanf("%d", &temp);

        ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
        newNode -> data = temp;
        newNode -> link = NULL;

        if(head == NULL) head = newNode;
        else tail -> link = newNode;
        tail = newNode;
    }
    return 0;
}

void insert(){
    int temp;
    printf("숫자 위치를 입력해주세요: ");
    scanf("%d",&temp);

    ListNode *index;
    for(index = head; index != NULL; index = index -> link){
        if(index -> data == temp){
            pt = index;
            break;
        }
    }

    printf("추가하고 싶은 숫자를 입력하세요: ");
    scanf("%d",&temp);
    ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode -> data = temp;
    newNode -> link = NULL;

    newNode -> link = pt -> link;
    pt -> link = newNode;
}

void dlt(){

}

void print(){
    ListNode *pt;
    for(pt= head; pt != NULL; pt = pt -> link){
        printf("%d -> ", pt -> data);
    }
    printf("NULL\n");
}

int main(){
    int check = 0;
    while(1){
        printf("1. 초기화\n2. 삽입\n3. 삭제\n4. 출력\n0. 종료");
        scanf("%d", &check);
        getchar();
        if(check == 1)
            reset();
        else if(check == 2)
            insert();
        else if(check == 3)
            dlt();
        else if(check == 4)
            print();
        else if(check == 0)
            break;
        else
            printf("보기중 골라주세요");
    }
}