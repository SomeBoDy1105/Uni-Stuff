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
    pile p = (pile)malloc(sizeof(pile));
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
void afficherpile(pile suiv)
{
    pile p = suiv;
    while (p != NULL)
    {
        printf("%s", p->info);
        dempiler(p, p->info, &p->suivt_list);

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
