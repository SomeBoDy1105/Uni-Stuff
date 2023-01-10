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
list tete = NULL;
void creation(list* tete, int n1)
{
<<<<<<< HEAD
    list nouv, ptr;
    int i;
    *tete = NULL;
    for (i = 1; i <= n; i++)
=======
    int i, x;
    list nouv;
    for (i = 0; i < n1; i++)
>>>>>>> e1d4fce35a1438bc2963e33bb8888228e2aed6f0
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &x);
        nouv = (list)malloc(sizeof(element));
        if (*tete == NULL)
        {
            *tete = nouv;
        }
        else
        {
            list temp = *tete;
            while (temp->svt != NULL)
            {
<<<<<<< HEAD
                nouv->svt = (*tete);
                (*tete) = nouv;
            }
            else
            {
                ptr = tete;
                while (ptr->svt != NULL)
                {
                    ptr = ptr->svt;
                }
                ptr->svt = nouv;

                /* b = false;
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
                 */
=======
                temp = temp->svt;
>>>>>>> e1d4fce35a1438bc2963e33bb8888228e2aed6f0
            }
            temp->svt = nouv;
        }
    }
}

/*displaying a list*/
void afficher(list tete)
{
<<<<<<< HEAD
    list p;
    p = tete;
    if (p == NULL)
=======
    list temp = tete;
    if (temp == NULL)
>>>>>>> e1d4fce35a1438bc2963e33bb8888228e2aed6f0
    {
        printf("List is empty");
        return;
    }
<<<<<<< HEAD
    while (p != NULL)
    {
        printf("%d \t", p->info);
        p = p->svt;
    }
    printf("\n\n");
=======
    while (temp != NULL)
    {
        printf("%d \t", temp->info);
        temp = temp->svt;
    }
    printf("\n");
>>>>>>> e1d4fce35a1438bc2963e33bb8888228e2aed6f0
}
/*merging two lists*/
void fusione(list *tete1, list *tete2, list *tete3)
{
    list temp, q, r;
    temp = *tete1;
    q = *tete2;
    *tete3 = NULL;
    while (temp != NULL && q != NULL)
    {
        if (temp->info <= q->info)
        {
            r = temp;
            temp = temp->svt;
        }
        else
        {
            r = q;
            q = q->svt;
        }
        r->svt = *tete3;
        *tete3 = r;
    }
    if (temp == NULL)
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
        while (temp != NULL)
        {
            r = temp;
            temp = temp->svt;
            r->svt = *tete3;
            *tete3 = r;
        }
    }
}

int main()
{
    list tete1, tete2, tete3, temp, q, r, nouv;
    int n1, n2;
    tete1 = NULL;
    tete2 = NULL;
    tete3 = NULL;
    /*filling Tete1*/
    printf("Number of elements of the first list is: ");
    scanf("%d", &n1);
    creation(&tete1, n1);
    /*displaying the first list*/
    printf("The first list is: ");
    afficher(tete1);
    /*filling tete2*/
    printf("Number of elements of the second list is: ");
    scanf("%d", &n2);
    creation(&tete2, n2);
    /*displaying the second list*/
    printf("the second list is: ");
    afficher(tete2);
    /*merging two lists*/
    fusione(&tete1, &tete2, &tete3);
    printf("the new merged list is: ");
    /*displaying the new list*/
    afficher(tete3);

    system("pause");
    return 0;
}