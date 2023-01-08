#include <stdio.h>
#include <stdlib.h>

struct node {
    int n;
    struct node* next;
};

struct node* tete = NULL;

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

int main() {
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int X;
        printf("Enter value %d: ", i+1);
        scanf("%d", &X);
        insert_at_end(X);
    }
    struct node* temp = tete;
    printf("\nElements in linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->n);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}
