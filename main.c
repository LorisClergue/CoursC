#include <stdio.h>

struct DateNaissance
{
    int jour;
    int mois;
    int annee;
};

struct Identite
{
    char prenom[16];
    char nom[16];
    int age;
    struct DateNaissance naissance;
};

int main()
{
    struct Identite tableau[3];
    for(int i = 0; i < 3; i++)
    {
        struct Identite personne;
        printf("Prenom : ");
        scanf(" %s", personne.prenom);
        printf("Nom : ");
        scanf(" %s", personne.nom);
        printf("Age : ");
        scanf(" %d", &personne.age);
        printf("Jour de naissance : ");
        scanf(" %d", &personne.naissance.jour);
        printf("Mois de naissance : ");
        scanf(" %d", &personne.naissance.mois);
        printf("Année de naissance : ");
        scanf(" %d", &personne.naissance.annee);
        tableau[i] = personne; 
    }
    
    for(int i = 0; i < 3; i++)
    {
        printf("%s", tableau[i].prenom);
        printf("\n");
    }
}
