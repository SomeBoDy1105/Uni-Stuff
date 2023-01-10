#ifndef pilemn
#define pilemn
-
pile initpile()
{
    return NULL;
}
void empiler(pile *suiv, char *info , list suivt_list)
{
    pile p = (pile)malloc(sizeof(struct pile));
    p->info = info;
    p->suivt_list = suivt_list;
    p->suivant = *suiv;
    *suiv = p;
}
void dempiler (pile suiv, char *info, list *suivt_list)
{

    pile p = suiv;
    *info = p->info;
    *suivt_list = p->suivt_list;
    suiv = suiv->suivant;
    free(p);
}
void afficherpile(pile suiv)
{
    pile p = suiv;
    while (p != NULL)
    {
        printf("%suiv", p->info);
        dempiler(p, p->info, &p->suivt_list);

    }
}
void libererpile(pile *suiv)
{
    pile p = *suiv;
    while (p != NULL)
    {
        *suiv = p->suivant;
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
#endif // !pilemn
