#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *nextNode;
} node;

node *HEAD = NULL;
int count = 0;


node insert_head(int x) {
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    count++;

    if (HEAD == NULL) {
        HEAD = newNode;
        HEAD->nextNode = NULL;
        return;
    }

    newNode->nextNode = HEAD;
    HEAD = newNode;
}

void print_linkedList(struct node *HEAD){
    struct node *temp;

    if(HEAD == NULL) {
        printf("List is empty\n");
    } else {
        printf("Elements of list are: \n");
        temp = HEAD;
        while(temp != NULL) {
            printf("\n%d",temp->data);
            temp = temp->nextNode;
        }
    }
}

void main() {
    int c, n;

    for(;;) {
        printf("\n1. Insert an element in linked list.\n");
        printf("2. Print linked list.\n");
        printf("3. Print the length of linked list.\n");
        printf("4. Exit\n");
        scanf("%d", &c);

        if(c == 1) {
                printf("Enter an integer: ");
                scanf("%d", &n);
                insert_head(n);
        }
        else if (c == 2) {
                print_linkedList(HEAD);
        }
        else if (c == 3) {
                printf("Currently %d items are stored inside the linked list.", count);
        }
        else if (c == 4) {
                exit(0);
        }
        else {
                printf("Invalid choice, Please try again.");
        }
    }
}
