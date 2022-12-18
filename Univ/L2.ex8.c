#include <stdio.h>
#include <stdlib.h>

typedef struct ST st;
struct ST
{
	int PE;
	float PD;
	int Expo;
};
typedef struct element element;
typedef element* liste;
struct element
{
	st val;
	liste suivt;
};
typedef struct element01 element01;
typedef element01* liste01;
struct element01
{
	float info;
	liste01 suivt01;
};
void construit (liste *T)
{
	liste nouv;
	st x;
	*T=NULL;
	do
	{
	printf("\n");
	printf("donner la valeur PE:");
	scanf("%d",&x.PE);
	printf("donner la valeur PD:");
	scanf("%f",&x.PD);
	printf("donner la valeur Expo:");
	scanf("%d",&x.Expo);
	nouv=(liste)malloc(sizeof(element));
	nouv->val=x;
	nouv->suivt=(*T);
	(*T)=nouv;
	
	}while(x.Expo!=0);
	
}
void aff(liste tete)
{
	liste p=tete;
	while (p!=NULL)
	{
		printf("%d ",(p->val).PE);
		printf("%.2f ",(p->val).PD);
		printf("%d",(p->val).Expo);
		printf("\n");
		p=p->suivt;
	}
}
float calcule(st x)
{
	float nb;
	while(x.PD>=1){
		x.PD=(x.PD/10);
		
	}
	if(x.PE>=0){
		nb=(x.PE+x.PD);
	}
	else{
	nb=(x.PE-x.PD);}
	
	if(x.Expo>0){
		while(x.Expo>0){
			nb=nb*10;
			x.Expo=x.Expo-1;
		}
		
	}
	else if(x.Expo<0)
	{
		while(x.Expo<0){
			nb=nb/10;
			x.Expo=x.Expo+1;
		}
		
		
	}
	return nb;
}
int main(int argc, char *argv[]) {
	float n;
	liste T;
	liste01 tete,nouv,Q;
	tete=NULL;
	Q=NULL;
	construit (&T);
	aff(T);
	liste p=T;
	while(p!=NULL)
	{
	n=calcule(p->val);
	nouv = (liste01)malloc(sizeof(element01));
	nouv->info=n;
	nouv->suivt01=NULL;
	if(tete==NULL)
	tete=nouv;
	
	else
	
	Q->suivt01=nouv;	
	
	Q=nouv;
	p=p->suivt;
	
	}
	Q=tete;
	while (Q!= NULL)
	{
		printf("%.4f\t",Q->info);
		Q=Q->suivt01;
	}
	
	return 0;
}
