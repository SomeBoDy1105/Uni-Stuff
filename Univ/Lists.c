#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct element element;
typedef element* liste;
struct element
{
    int info;
    liste svt;
};
/*affichage*/
    /*fifo*/
void creation (liste *tete,int n)
{
	liste nouv,p,Q;
	bool b;
	int i;
	*tete=NULL;
	for(i=1;i<=n;i++)
        {
		nouv=(liste)malloc(sizeof(element));
		printf("val %d=",i);
		scanf("%d",&nouv->info);
		nouv->svt=NULL;
		if ((*tete)==NULL){
			(*tete)=nouv;	
		}
		else{
			if((*tete)->info>=nouv->info){
				nouv->svt=(*tete);
				(*tete)= nouv;
			}
			else{
				b=false;
				Q=(*tete);
				p=NULL;
				while(Q!=NULL && b==false)
                        {
					    if(Q->info<=nouv->info)
                        {
						    p=Q;
						    Q=Q->svt;
					    }
					    else
						    b=true;
					}
					nouv->svt=Q;
					p->svt=nouv; 
				}
			}
		
		}	
	}
/*------------------------------------------------------------------------------------------------------*/
/*Lifo*/



