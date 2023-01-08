#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct element element;
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
		
