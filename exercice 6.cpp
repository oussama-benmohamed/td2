#include <stdio.h>

int main() {
    float Moy;

    printf("Entrez la moyenne de l'etudiant : ");
    scanf("%f", &Moy);

    if (Moy < 0 || Moy > 20) {
        printf("Moyenne invalide\n");
    }
    else if (Moy < 10) {
        printf("Non admis\n");
    }
    else if (Moy < 12) {
        printf("Passable\n");
    }
    else if (Moy < 14) {
        printf("Assez Bien\n");
    }
    else if (Moy < 17) {
        printf("Bien\n");
    }
    else if (Moy < 18) {
        printf("Tres Bien\n");
    }
    else if (Moy < 20) {
        printf("Excellent\n");
    }
    else {
        printf("Parfait\n");
    }

    return 0;
}

