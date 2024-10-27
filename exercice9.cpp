#include <stdio.h>

int main() {
    double operande1, operande2, resultat;
    char operateur;

    printf("Entrez le premier operande : ");
    scanf("%lf", &operande1);

    printf("Entrez l'operateur (+, -, *, /) : ");
    scanf(" %c", &operateur); 

  
    printf("Entrez le deuxieme operande : ");
    scanf("%lf", &operande2);

    switch (operateur) {
        case '+':
            resultat = operande1 + operande2;
            printf("Le resultat est : %.2lf\n", resultat);
            break;
        case '-':
            resultat = operande1 - operande2;
            printf("Le resultat est : %.2lf\n", resultat);
            break;
        case '*':
            resultat = operande1 * operande2;
            printf("Le resultat est : %.2lf\n", resultat);
            break;
        case '/':
            if (operande2 != 0) {
                resultat = operande1 / operande2;
                printf("Le resultat est : %.2lf\n", resultat);
            } else {
                printf("Erreur : Division par zero\n");
            }
            break;
        default:
            printf("Operateur invalide\n");
    }

    return 0;
}

