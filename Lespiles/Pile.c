#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct cellule cellule;
typedef cellule *list;
typedef struct cellule
{
    char info[30];
    list suivt;
};

/*declarring a pile*/
typedef struct struc struc;
typedef struc *pile;
typedef struct  struc
{
    char info;
    list suivt_list;
    pile suiv;
};

pile initpile()
{
    return NULL;
}
void empiler(pile *suiv, char *info , list suivt_list)
{
    pile p = (pile)malloc(sizeof(struc));
    p->info = info;
    p->suivt_list = suivt_list;
    p->suiv = *suiv;
    *suiv = p;
}
void dempiler (pile suiv, char *info, list *suivt_list)
{
    pile p = suiv;
    *info = p->info;
    *suivt_list = p->suivt_list;
    suiv = suiv->suiv;
    free(p);
}
afficherpile(pile s)
{
    list tete;
    char c;
    while (pilevide(s) == false)
    {
        dempiler(s, c, &tete);
        if (tete != NULL)
        {
             printf("%c \t", c);
            while (tete != NULL)
        {
            printf("%s \t", tete->info);
            tete = tete->suivt;
        }
        printf("\n----------------------------------------------------------\n");
        }
        
       
    }
}
void libererpile(pile *suiv)
{
    pile p = *suiv;
    while (p != NULL)
    {
        *suiv = p->suiv;
        free(p);
        p = *suiv;
    }
}
bool pilevide(pile suiv)
{
    return suiv == NULL;
}
void sommetpile(pile suiv, char *info, list *suivt_list)
{
    *info = suiv->info;
    *suivt_list = suiv->suivt_list;
}
