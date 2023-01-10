#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct element element;
<<<<<<< HEAD
typedef element *list;
struct element
{
    int info;
    list svt;
};
void create(list tete, int n)
{
    list nouv, ptr;
    nouv = (list)malloc(sizeof(list));
    printf("\nEnter the data value for the node:\t");
    scanf("%d", &nouv->info);
    nouv->svt = NULL;
    if (tete == NULL)
    {
        tete = nouv;
    }
    else
    {
        ptr = tete;
        while (ptr->svt != NULL)
        {
            ptr = ptr->svt;
        }
        ptr->svt = nouv;
    }
}
=======
typedef element *liste;
struct element
{
    int val;
    liste suivt;
};
liste tete = NULL;
void creer_liste (liste *tete ,int n)
{
	int i,x;
	liste nouv;
	for(i = 0; i < n; i++)
	{
		printf("Enter value %d: ", i+1);
        scanf("%d", &x);
		/*start of function*/
		nouv = (liste)malloc(sizeof(element));
		nouv->val = n;
		nouv->suivt = NULL;
		if (tete == NULL) {
			tete = nouv;
			return;
		}
		liste temp = tete;
		while (temp->suivt != NULL){
			temp = temp->suivt;
			temp->suivt = nouv;
		}
	}
		
>>>>>>> e1d4fce35a1438bc2963e33bb8888228e2aed6f0
