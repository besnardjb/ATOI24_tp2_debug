#include <stdio.h>

unsigned long long fibonacci(unsigned long long n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) { // ajout de cette condition
        return 1;
       } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    unsigned long long n = 50; // Valeur de n choisie arbitrairement

    printf("Calcul du nombre de Fibonacci pour n = %llu\n", n);
    printf("Le résultat est : %llu\n", fibonacci(n));

    return 0;
}
