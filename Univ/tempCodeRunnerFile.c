t;
struct element
{
    int info;
    list svt;
};
/*creating a list*/
void creation(list  tete, int n)
{
    list nouv, ptr;
    int i;
     tete = NULL;
    for (i = 1; i <= n; i++)
    {
        nouv = (list)malloc(sizeof(element));
        printf("val %d=", i);
        scanf("%d", &nouv->info);
        nouv->svt = NULL;
        if (( tete) == NULL)
        {
            ( tete) = nouv;
        }