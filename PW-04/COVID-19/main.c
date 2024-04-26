#include <stdio.h>
#include <stdlib.h>
#define max 100

typedef struct {
   int jour ;
   int mois ;
   int annee ;
} Date ;

typedef struct {
  char type[30] ;
  Date date_prem ;
  int nbj ;
} Vaccin ;

typedef struct {
  char cin[30] ;
  char nom [30] ;
  char prenom[30];
  Vaccin vac ;
} Citoyen ;

void Lecture(Citoyen C[max],int N){
    int i;
    for ( i=0; i<N ; i++){
        printf("Entrer Le CIN :"); scanf("%s",C[i].cin);
        printf("Entrer Le nom :"); scanf("%s",C[i].nom);
        printf("Entrer Le prenom :"); scanf("%s",C[i].prenom);
        printf("Entrer le type de vaccin :"); scanf("%s",C[i].vac.type);
        printf("Entrer la date de vaccin \n");
        printf(" Entrer le jour :"); scanf("%d",&C[i].vac.date_prem.jour);
        printf(" Entrer le mois :"); scanf("%d",&C[i].vac.date_prem.mois);
        printf(" Entrer l'annee :"); scanf("%d",&C[i].vac.date_prem.annee);
        printf("Entrer Le nombre de jours entre les deux doses :");
        scanf("%d",&C[i].vac.nbj);
        printf("******************************\n");
   }
}

void Affichage(Citoyen C[max],int N){
    int i ;
    for ( i=0; i<N ; i++){
        printf("Le CIN : %s\n",C[i].cin);
        printf("Le nom : %s\n",C[i].nom);
        printf("Le prenom :%s\n",C[i].prenom);
        printf("Le type de vaccin : %s\n",C[i].vac.type);
        printf("La date de vaccin: %d/%d/%d\n ", C[i].vac.date_prem.jour ,
        C[i].vac.date_prem.mois, C[i].vac.date_prem.annee);
        printf("Le nombre de jours entre les deux doses : %d\n",C[i].vac.nbj);
        printf("******************************\n");
    }
}

void totalVaccin (Citoyen C[max] , int N){
    int i,Nb_Astra=0,Nb_Sino=0 ;
    for ( i=0; i<N ; i++){
        if(strcmp(C[i].vac.type,"Astrazeneca")==0)
            Nb_Astra++;
         else Nb_Sino++;
    }
    printf("Le nombre de citoyens qui vont Astrazeneca %d\n",Nb_Astra);
    printf("Le nombre de citoyens qui vont Sinopharme %d\n",Nb_Sino);
}

void CitoyenVac (Citoyen C[max],int N,char type[30],Citoyen tab[max]){
    int i;
    int count =0;
   for ( i=0; i<N ; i++){
        if(strcmp(C[i].vac.type,type)==0){
            tab[count] = C[i];
            (count)++;
        }
   }
}

Date * deuxDose(Citoyen C[max],int N ,char type[30]){
    int i,j=0;
    Date dates[max];
    for ( i=0; i<N ; i++){
            if(strcmp(C[i].vac.type,type)==0){
                dates[i].jour = ( C[i].vac.date_prem.jour + C[i].vac.nbj )%30;
                dates[i].mois = ( C[i].vac.date_prem.mois +(C[i].vac.date_prem.jour
                +C[i].vac.nbj)/30)%12;
                dates[i].annee = C[i].vac.date_prem.annee +(C[i].vac.date_prem.mois
                +(C[i].vac.date_prem.jour + C[i].vac.nbj)/30)/12;
           }
   }
   return dates;
}
void AffichageDate(Citoyen C[max], Date dates[max], int N, char type[30]){
    int i ;
    for ( i=0; i<N ; i++){
     if(strcmp(C[i].vac.type,type)==0){
        printf("Le CIN : %s\n",C[i].cin);
        printf("Le nom : %s\n",C[i].nom);
        printf("Le prenom :%s\n",C[i].prenom);
        printf("Le type de vaccin : %s\n",C[i].vac.type);
        printf("La deuxieme date de vaccin: %d/%d/%d\n ", dates[i].jour ,dates[i].mois, dates[i].annee);

        printf("******************************\n");
    }
     }
}


int main()
{
    printf("Entrer Le number de  Citoyen:\n");
    int N;
    scanf("%d",&N);
    printf("remplir leur information:\n");
    Citoyen C[max];
    Lecture(C,N);
    Affichage(C,N);
    printf("nombre de Citoyen de chaque type de vaccination:\n");
    totalVaccin (C,N);
    printf("\nEntrer  le type de vaccination qui veux vouler: ");
    char type[30];
    Citoyen tab[max];
    scanf("%s",type);
    printf("Le nombre de citoyens qui vont %s\n",type);
    CitoyenVac (C, N, type, tab);
    Affichage(tab,N);
    printf("\nEntrer  le type de vaccination qui veux savoir dexiemme dose: ");
     char type2[30];
    scanf("%s",type2);
    Date *dates2;
    dates2 = deuxDose(C,N ,type2);
    AffichageDate(C, dates2, N, type2);




    return 0;
}
