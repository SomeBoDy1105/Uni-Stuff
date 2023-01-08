#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct element element;
typedef element *list;
struct element
{
    int info;
    list svt;
};
void create(list tete, int n)
{
    list nouv, ptr;
    nouv = (list)malloc(sizeof(list));
    printf("\nEnter the data value for the node:\t");
    scanf("%d", &nouv->info);
    nouv->svt = NULL;
    if (tete == NULL)
    {
        tete = nouv;
    }
    else
    {
        ptr = tete;
        while (ptr->svt != NULL)
        {
            ptr = ptr->svt;
        }
        ptr->svt = nouv;
    }
}