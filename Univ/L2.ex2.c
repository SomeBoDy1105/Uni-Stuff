
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct element element;
typedef element* liste;
struct element
{
	int val;
	liste suivt;
};
void creer_liste (liste *tete ,int n)
{
	int i;
	*tete = NULL;
	liste nouv,Q;
	for(i=0;i<n;i++){
	nouv= (liste)malloc(sizeof(element));
	if(nouv != NULL)
	{
	scanf("%d",&nouv->val);
	if((*tete)==NULL)
	{
		nouv->suivt=(*tete);
		*tete = nouv;
	}
	else{
	
	nouv->suivt = NULL;
	Q->suivt = nouv;
    }
    Q=nouv;
	}
}	
}
liste occurs_adress(liste tete,int valeur)
{
	liste p;
	p=tete;
	while(p!=NULL)
	{
		if(p->val==valeur)
		
		return p;
		else 
		p=p->suivt;
	}
	return p;
}
int occurs_nbr(liste tete,int valeur)
{
	int c=0;
	liste p;
	p=tete;
	while(p!=NULL)
	{
		if(p->val==valeur)
		c++;
		
		p=p->suivt;
	}
	return c;
}
void insertion(liste *tete,int k,int x)
{
	int i=1;
	liste P,N;
	N = (liste)malloc(sizeof(element));
	N->val=x;
	P=*tete;
	while(P!=NULL && i<k-1)
	{
		P=P->suivt;
		i++;
	}
	if(k==1)
	{
		N->suivt=*tete;
		*tete=N;
	}
	if(P==NULL)
	printf("positoin n exist pas");
	else
	{
		N->suivt= P->suivt;
		P->suivt=N;
	}
	}
	void insertion_X_Y(liste *tete,int X,int Y)
{
	bool b=false;
	liste nouv,p;
	p=(*tete);

	while(p!=NULL && b==false)
	{
		if(p->val==Y)
		b= true;
		else
		{
			
			p=p->suivt;
		}
	}
	if(b==false)
	printf("valeur %d n'exsit pas",Y);
	else
	{
		nouv = (liste)malloc(sizeof(element));
		nouv->val=X;
		
			nouv->suivt=p->suivt;
			p->suivt=nouv;
		
		
	}
}
void supprimer_pos(liste *tete,int k)
{
	liste p,Q;
	int i=1;
	p=*tete;
	if(p==NULL)
	printf("liste est vide");
	else
	{
	
	while(p!=NULL && i<k)
	{
		Q=p;
		p=p->suivt;
		i++;
	}
	if(p==NULL)
	printf("position n'exsit pas");
	else
	{
	
	if(k==1)
	{
		(*tete)=(*tete)->suivt;
		free(p);
		p=NULL;
	}
	else
	{
		Q->suivt=p->suivt;
		free(p);
		p=NULL;
	}
}
}
}
liste supprimer_tout_val(liste *tete,int valeur)
{
	liste p,Q;
	p=(*tete);
	Q=NULL;
	while(p!=NULL)
	{
		if(valeur == p->val)
		{
			if(p==(*tete))
			{
				(*tete)=(*tete)->suivt;
				free(p);
				p=(*tete);
			}
			else
			{
				Q->suivt=p->suivt;
				free(p);
				p=Q->suivt;
			}
		
		}
		else
		{
			Q=p;
			p=p->suivt;
		}
	}
	return (*tete);
}
int main ()
{
	int n,i,valeur;
	liste tete,p;
	tete=NULL;
	printf("donner la valeur N nombre de case :");
	scanf("%d",&n);
	creer_liste (&tete,n);
	p=tete;
	while(p!=NULL)
	{
		printf("%d \t",p->val);
		p=p->suivt;
		
	}
	printf(" \n donnes la valeur :");
	scanf("%d",&valeur);

	printf("adres = %d \n",occurs_adress(tete,valeur));
	printf("nombre occurens = %d",occurs_nbr(tete,valeur));
	int x,k;
	printf("\ndonnez la valeur que vous souhaitez ajouter :");
	scanf("%d",&x);
	printf("donnez maintenant n'importe quel rang qui ajoute de la valeur :");
	scanf("%d",&k);
	insertion(&tete,k,x);
	printf("\n");
	p=tete;
	while(p!=NULL)
	{
		printf("%d \t",p->val);
		p=p->suivt;
		
	}
	int X,Y;
	
	printf("\nvaleur ajouter X apres Y :");
	scanf("%d",&X);
	printf("valeur Y :");
	scanf("%d",&Y);
	insertion_X_Y(&tete,X,Y);
	printf("\n");
	p=tete;
	while(p!=NULL)
	{
		printf("%d \t",p->val);
		p=p->suivt;
		
	}
	printf("\ndonner position supprimer :");
	scanf("%d",&k);
	supprimer_pos(&tete,k);
		printf("\n");
	p=tete;
	while(p!=NULL)
	{
		printf("%d \t",p->val);
		p=p->suivt;
		
	}
	printf("\ndonner la valeur supprimer :");
	scanf("%d",&x);
	tete = supprimer_tout_val(&tete,x);
	printf("\n");
	p=tete;
	while(p!=NULL)
	{
		printf("%d \t",p->val);
		p=p->suivt;
		
	}
	return 0;
}
