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
/*displaying a list*/
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
/*merging two lists*/
void fusione(list *tete1, list *tete2, list *tete3)
{
    list p, q, r;
    p = *tete1;
    q = *tete2;
    *tete3 = NULL;
    while (p != NULL && q != NULL)
    {
        if (p->info <= q->info)
        {
            r = p;
            p = p->svt;
        }
        else
        {
            r = q;
            q = q->svt;
        }
        r->svt = *tete3;
        *tete3 = r;
    }
    if (p == NULL)
    {
        while (q != NULL)
        {
            r = q;
            q = q->svt;
            r->svt = *tete3;
            *tete3 = r;
        }
    }
    else
    {
        while (p != NULL)
        {
            r = p;
            p = p->svt;
            r->svt = *tete3;
            *tete3 = r;
        }
    }
}


int main()
{
    list tete1, tete2, tete3, p, q, r, nouv;
    int n1, n2;
    tete1 = NULL;
    tete2 = NULL;
    tete3 = NULL;
    /*filling Tete1*/
    printf("donner le nombre d'elements de la premiere liste: ");
    scanf("%d", &n1);
    creation(&tete1, n1);
    /*filling tete2*/
    printf("donner le nombre d'elements de la deuxieme liste: ");
    scanf("%d", &n2);
    creation(&tete2, n2);
    /**/
    printf("la premiere liste est: ");
    afficher(tete1);
    /**/
    printf("la deuxieme liste est: ");
    afficher(tete2);
    /*merging two lists*/
    fusione(&tete1, &tete2, &tete3);
    printf("la liste fusionnee est: ");
    /*displaying the new list*/
    afficher(tete3);


    return 0;
}