#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Pile.h"
/*
typedef struct cellule cellule;
typedef cellule *list;
typedef struct cellule
{
    char info[30];
    list suivt;
};

//declarring a pile
typedef struct struc struc;
typedef struc *pile;
typedef struct  struc
{
    char info;
    list suivt_list;
    pile suiv;
};
*/



/*function 1*/
list PREMIER (char *info)
{
    list nouv;
    nouv = (list)malloc(sizeof(cellule));
    nouv ->suivt = NULL;
    strcpy(nouv->info, info);
    
    return nouv;

}

void AJOUT (list *tete, char *info)
{
    list nouv,p;
    nouv = (list)malloc(sizeof(cellule));
    strcpy(nouv->info,info);
    nouv->suivt = NULL;
    p= *tete;
    while (p->suivt != NULL)
    {
        p = p->suivt;
    }
    p->suivt = nouv;


}
void SUPP (list *tete )
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

int main()
{   
    list tete,p;
    char C[30];
    //question 1
    printf("donner une pays : ");
    scanf("%s",C);
    tete = PREMIER(C);
    printf("%s\n", tete->info);
    // question 2

    printf("donner une pays : ");
    scanf("%s",C);
    AJOUT(&tete,C);
    p = tete;
    while (p != NULL)
    {
        printf("%s \t",p->info);
        p = p->suivt;
    }
    void construction (list *tete)
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
    //question 3
    printf("\n\n");
    SUPP(&tete);
    printf("%s", tete->info);

    return 0;
}