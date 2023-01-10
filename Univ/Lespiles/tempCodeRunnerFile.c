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