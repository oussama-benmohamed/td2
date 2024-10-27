#include <stdio.h>

int main() {
    int montant;
    int billets30, billets20, billets10, billets5;
    int reste;

    printf("Entrez le montant a retirer (multiple de 5) : ");
    scanf("%d", &montant);

    if (montant % 5 != 0) {
        printf("Montant invalide. Le montant doit etre un multiple de 5.\n");
        return 1;  
    }

    billets30 = montant / 30;
    reste = montant % 30;

    billets20 = reste / 20;
    reste = reste % 20;

    billets10 = reste / 10;
    reste = reste % 10;

    billets5 = reste / 5;

    printf("Billets de 30 euros : %d\n", billets30);
    printf("Billets de 20 euros : %d\n", billets20);
    printf("Billets de 10 euros : %d\n", billets10);
    printf("Billets de 5 euros : %d\n", billets5);

    return 0;
}

