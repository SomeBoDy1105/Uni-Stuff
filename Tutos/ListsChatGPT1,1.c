#include <stdio.h>
#include <stdlib.h>
typedef struct element element;
typedef element* liste;
struct element {
    int val;
    liste next;
};

liste tete = NULL;

void insert_at_end(int val) {
    liste nouv = (liste)malloc(sizeof(liste));
    nouv->val = val;
    nouv->next = NULL;
    if (tete == NULL) {
        tete = nouv;
        return;
    }
    liste temp = tete;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = nouv;
}

int main() {
    int i, val;
    printf("Enter the number of elements: ");
    scanf("%d", &val);
    for (i = 0; i < val; i++) {
        int X;
        printf("Enter value %d: ", i+1);
        scanf("%d", &X);
        insert_at_end(X);
    }
    liste temp = tete;
    printf("\nElements in linked list: ");
    while (temp != NULL) {
        printf("%d \t ", temp->val);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}
