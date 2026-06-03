#include <stdio.h>
#include <stdlib.h>
typedef struct liste liste;
struct liste{
    int val ;
    liste *suiv;
};

int main()
{
    liste *l,*p,*Q,*w,*y,*k;
    l=malloc(sizeof(*l));//allouer l
    int i=0;
    printf("donner la val num %d:",i);
    scanf("%d",&l->val);
    l->suiv=NULL;
    i++;
    char rep;
    scanf(" %c",&rep);
    p=l;
    while(rep !='N' && rep !='n')
    {
        Q=malloc(sizeof(*Q));
        printf("donner la val num %d:",i);
        scanf("%d",&Q->val);
        Q->suiv=NULL;
        p->suiv=Q;
        p=p->suiv;
        i++;
        scanf(" %c",&rep);

    }
    p=l;
    //affichage de la liste
    while(p!=NULL)
    {
        printf("%d|",p->val);
        p=p->suiv;
    }
    //inserer un element
    //inverser la liste
    Q=l;
    while(Q->suiv!=NULL)
    {
        Q=Q->suiv;
    }
    p=malloc(sizeof(*p));
    p->val=Q->val;
    w=p;
    while(Q!=l)
    {
        k=l;
        while(k->suiv!=Q)
        {
            k=k->suiv;
        }
        y=malloc(sizeof(*y));
        y->val=k->val;
        y->suiv=NULL;
        w->suiv=y;
        w=w->suiv;
        Q=k;
    }
    l=p;
    //affichage de la liste inversé
    printf("afficher la liste inversé:\n");
    while(p!=NULL)
    {
        printf("%d|",p->val);
        p=p->suiv;
    }
    //supprimer toutes les valeurs doubles
    p=l;
    k=p->suiv;
    while(k!=NULL){
        if(p->val!=k->val){
            p=p->suiv;
            k=k->suiv;
        }
        else{
            //supprimer
            Q=k;
            k=k->suiv;
            p->suiv=k;
            free(Q);
        }
    }
    p=l;
    printf("afficher la liste sans valeurs doubles :\n");
    while(p!=NULL)
    {
        printf("%d|",p->val);
        p=p->suiv;
    }
    return 0;
}
