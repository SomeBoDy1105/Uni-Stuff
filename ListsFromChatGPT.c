#include <stdio.h>
#include <stdlib.h>

struct node {
    int n;
    struct node* next;
};

struct node* tete = NULL;

void insert_at_beginning(int n) {
    struct node* nouv = (struct node*)malloc(sizeof(struct node));
    nouv->n = n;
    nouv->next = tete;
    tete = nouv;
}

void insert_at_end(int n) {
    struct node* nouv = (struct node*)malloc(sizeof(struct node));
    nouv->n = n;
    nouv->next = NULL;
    if (tete == NULL) {
        tete = nouv;
        return;
    }
    struct node* temp = tete;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = nouv;
}

void display() {
    struct node* temp = tete;
    while (temp != NULL) {
        printf("%d ", temp->n);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insert_at_beginning(3);
    insert_at_beginning(2);
    insert_at_beginning(1);
    insert_at_end(4);
    insert_at_end(5);

    display();
    return 0;
}
