#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int data;
    struct _node *next;
} Node;

int main(void){
    Node *head = NULL;
    Node *tail = NULL;
    Node *cur = NULL;

    Node *newNode = NULL;

    int readData;

    while(1){
        printf("자연수 입력 : ");
        scanf("%d", &readData);
        if(readData <1){
            break;
        }

        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
        }
        else{
            tail->next = newNode;
        }

        tail=newNode;
    }
    printf("\n");

    printf("전체 출력\n");
    
    if(head == NULL){
        printf("empty!\n");
    }
    else{
        cur = head;
        printf("%d ", cur->data);

        while(cur->next != NULL){
            cur = cur ->next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");

    if(head == NULL){
        return 0;
    }
    else{
        Node *delNode = head;
        Node *delNextNode = head->next;

        printf("delete %d\n", delNode->data);
        free(delNode);

        while(delNextNode != NULL){
            delNode = delNextNode;
            delNextNode = delNextNode->next;

            printf("delete %d\n", delNode->data);
            free(delNode);
        }
    }

    return 0;
}