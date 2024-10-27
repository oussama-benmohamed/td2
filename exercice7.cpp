#include <stdio.h>

int main() {
    float Moy;
    int MoyTrunc; 

    
    printf("Entrez la moyenne de l'etudiant : ");
    scanf("%f", &Moy);

   
    if (Moy < 0 || Moy > 20) {
        printf("Moyenne invalide\n");
        return 1;  
    }


    MoyTrunc = (int)Moy;

   
    switch (MoyTrunc) {
        case 0 ... 9:
            printf("Non admis\n");
            break;
        case 10 ... 11:
            printf("Passable\n");
            break;
        case 12 ... 13:
            printf("Assez Bien\n");
            break;
        case 14 ... 16:
            printf("Bien\n");
            break;
        case 17:
            printf("Tres Bien\n");
            break;
        case 18 ... 19:
            printf("Excellent\n");
            break;
        case 20:
            printf("Parfait\n");
            break;
        default:
            printf("Moyenne invalide\n");  // Cas par sécurité
            break;
    }

    return 0;
}

