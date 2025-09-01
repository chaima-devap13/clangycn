#include<stdio.h>
#include<stdlib.h>

typedef struct etd {
    int age ,id;
    char nom[25],prenom[25];
    float moy;
} etd;

etd *t[100];
int n,choix;
char rep;

void letd(etd *e) {
    printf("donner le nom\t"); 
    scanf("%s", e->nom);

    printf("donner le prenom\t"); 
    scanf("%s", e->prenom);

    do {
        printf("donner l'age\t"); 
        scanf("%d", &e->age);
    } while(e->age < 16 || e->age > 70);

    do {
        printf("donner la moyenne\t"); 
        scanf("%f", &e->moy);
    } while(e->moy < 0 || e->moy > 20);
}

void ltab(etd *t[100], int n) { 
    for(int i=0; i<n; i++) {  
        t[i] = malloc(sizeof(etd));
        letd(t[i]);
        t[i]->id = i+1;
    }
}

void ecetud(etd *e) {
    printf("Nom : %s\n", e->nom);
    printf("Prenom : %s\n", e->prenom);
    printf("ID : %d\n", e->id);
    printf("Age : %d\n", e->age);
    printf("Moyenne : %.2f\n", e->moy);

    if(e->moy >= 10)
        printf("ADM\n");
    else 
        printf("AJN\n");
}

void affetd(etd *t[100], int n) {
    for(int i=0; i<n; i++) {
        ecetud(t[i]);
    }
}

float moyetd(etd *t[100], int n) {
    float som=0;
    for(int i=0; i<n; i++) {
        som += t[i]->moy;
    }
    return som/n;
}

void emenue() {
    printf("\n=== Menu Principal ===\n");
    printf("1: Remplissage\n");
    printf("2: Affichage des informations\n");
    printf("3: Moyenne generale des etudiants\n");
    printf("Donner votre choix: ");
}

int main () {
    printf("Donner le nombre des etudiants : \t");
    scanf("%d",&n);

    rep = 'o';
    while(rep=='o' || rep=='O') {
        emenue();
        scanf("%d", &choix);

        switch (choix) {
            case 1: ltab(t,n); break;
            case 2: affetd(t,n); break;
            case 3: printf("Moyenne generale : %.2f\n", moyetd(t,n)); break;
            default: printf("Choix invalide\n"); break;
        }

        printf("Voulez-vous continuer o/n :\t");
        scanf(" %c", &rep);
    }
    return 0;
}
