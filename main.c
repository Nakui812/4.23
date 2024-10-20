#include <stdio.h>
#include <math.h>

int main() {
   float y;
    int x = 0;

    printf("Inserisci un numero reale positivo: ");
    scanf("%f", &y);

    while (pow(x + 1, x + 1) <= y) {
        x++;
    }

    printf("Il massimo numero intero positivo x per cui x^x <= %.2f è %d.\n", y, x);

    return 0;
}
