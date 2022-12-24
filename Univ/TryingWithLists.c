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
/*creating a list*/
void creation(liste *tete, int n)
{
    list nouv, p, q;
    bool b;
    int i;
    *tete = NULL;
    for (i = 1; i <= n; i++)
    {
        nouv = (list)malloc(sizeof(element));
        printf("val %d=", i);
        scanf("%d", &nouv->info);
        nouv->svt = NULL;
        if ((*tete) == NULL)
        {
            (*tete) = nouv;
        }
        else
        {
            if ((*tete)->info = nouv->info)
            {
                nouv
            }
        }
    }
}

int main()
{

    return 0;
}