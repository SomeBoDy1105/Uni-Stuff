#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct  cellule cellule;
typedef cellule* liste;
struct cellule 
{
	int info;
	liste svt;	
};

void creation (liste *tete,int n)
{
	liste nouv,p,Q;
	bool b;
	int i;
	*tete=NULL;
	for(i=1;i<=n;i++)
	{
		nouv=(liste)malloc(sizeof(cellule));
		printf("val %d=",i);
		scanf("%d",&nouv->info);
		nouv->svt=NULL;
		if ((*tete)==NULL)
		{
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
				while(Q!=NULL && b==false){
					if(Q->info<=nouv->info){
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
void affiche(liste tete){
	liste P;
	P=tete;
	while(P!=NULL){
		printf(" %d \t",P->info);
		P=P->svt;
		}
		printf("\n\n");
}
void fusione(liste T1,liste T2,liste *T3){
	liste Q3;
    Q3=NULL;
    while(T1!=NULL && T2!=NULL){
        if(T1->info < T2->info){
            if(*T3==NULL) {
                *T3=T1;
                Q3=T1;
            }
            else {
                Q3->svt=T1;
                Q3=T1;
            }
            T1=T1->svt;
        }
        else{   
			if(T3==NULL) {
                *T3=T2;
                Q3=T2;
            }
            else {
                Q3->svt=T2;
                Q3=T2;
            }
            T2=T2->svt;
        }
    
    if(T1!=NULL)
    	Q3->svt=T1;
    else
		Q3->svt=T2;	

                                                              
	}
}
	

int main(){
	liste T3,T1,T2,nouv;
	int n,i,J,x,val;
	T3=NULL;
	T1=NULL;
	T2=NULL;
    
	printf("donner le nombre n de T1=");
	scanf("%d",&n);
	creation(&T1,n);

	printf("donner le nombre n de T2=");
	scanf("%d",&n);
	creation(&T2,n);

	printf("les element de liste T1 est =\n");
	affiche(T1);

	printf("les element de liste T2 est =\n");
	affiche(T2);

	fusione(T1,T2,&T3);

	printf("les element de liste T3 est =\n");
	afiche(T3);

	system("pause");
	return 0;
	
}