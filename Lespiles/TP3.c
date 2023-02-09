#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Pile.h"

/*function 1*/
list PREMIER(char *info)
{
    list nouv;
    nouv = (list)malloc(sizeof(cellule));
    nouv->suivt = NULL;
    strcpy(nouv->info, info);

    return nouv;
}

void AJOUT(list *tete, char *info)
{
    list nouv, p;
    nouv = (list)malloc(sizeof(cellule));
    strcpy(nouv->info, info);
    nouv->suivt = NULL;
    p = *tete;
    while (p->suivt != NULL)
    {
        p = p->suivt;
    }
    p->suivt = nouv;
}
void SUPP(list *tete)
{
    list temp;
    temp = *tete;
    while (*tete != NULL)
    {
        *tete = (*tete)->suivt;
        free(temp);
        temp = *tete;
    }
}
/*void construction (list *tete)
    {
        list nouv;
        char C[30];
        printf("donner une pays : ");
        scanf("%s",C);
        nouv = PREMIER(C);
        *tete = nouv;
        printf("donner une pays : ");
        scanf("%s",C);
        while (strcmp(C,"fin") != 0)
        {
            AJOUT(&nouv,C);
            printf("donner une pays : ");
            scanf("%s",C);
        }
    }
*/
void construction(pile *piles, int n)
{
    char pays[30];
    char c2;
    list tete2;
    pile s = initpile();
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
        empiler(&piles, alpha[i], NULL);
    }

    for (int i = 1; i <= n; i++)
    {
        pile s1 = initpile();
        bool b = false;
        printf("donner une pays : ");
        scanf("%s", &pays);
        char c1 = pays[0];
        while (pilevide(s) == false && b == false)
        {
            sommetpile(s, c2, tete2);
            if (c2 == c1)
            {
                if (tete2 == NULL)
                {
                    dempiler(s, c2, &tete2);
                    tete2 = PREMIER(pays);
                    empiler(&s, c2,&tete2);
                }
                else
                {
                    dempiler(s, c2, &tete2);
                    AJOUT(&tete2, pays);
                    empiler(&s, c2, &tete2);
                }
                b = true;
            }
            else
            {
                dempiler(s, c2, &tete2);
                empiler(&s1, c2, &tete2);
            }
        }
        while (pilevide(s1)== false )
        {
            dempiler(s1,c2,&tete2);
            empiler(&s,c1,&tete2);
        }
    }
}
int main()
{   
    int n;
    list tete, p;
    pile s = initpile();
    char C[30];
    // question 1 & 2
    printf(" donner nombre de pays: ");
    scanf("%d", &n);
    construction(&tete, n);
    p = tete;
    while (p != NULL)
    {
        printf("%s \t", p->info);
        p = p->suivt;
    }
    printf("\n\n");
    afficherpile(s);
    // question 3
    printf("\n\n");
    SUPP(&tete);
    printf("%s \n\n", tete->info);

    return 0;
}