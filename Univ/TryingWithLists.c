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
void creation(list *tete, int n)
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
                nouv->svt = (*tete);
                (*tete) = nouv;
            }
            else
            {
                b = false;
                q = (*tete);
                p=NULL;
                while (q != NULL && b == false)
                {
                    if (q->info <= nouv->info)
                    {
                        p = q;
                        q = q->svt;
                    }
                    else
                        b = true;
                }
                nouv->svt = q;
                p -> svt = nouv;
            }
        }
    }
}
void afficher(list tete){
 list p;
 p=tete;
 while (p!= NULL)
 {
    printf("%d \t", p->info);
    p = p->svt;
 }
 printf("\n\n");
}
int main()
{

    return 0;
}