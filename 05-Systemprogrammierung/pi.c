/* Implementation eines Algorithmus zur Bestimmung der Ziffern von pi.
   Gedacht als Geschwindigkeitsvergleich mit der äquivalenten
   Python-Implementation (pi.py). */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    // Algorithm: https://www.cs.ox.ac.uk/research/pdt/ap/minutes/algprog-20031107.pdf

    const int n_digits = 15000;
    int len = (n_digits/4 + 1)*14;

    int *a = malloc(sizeof(int) * len);
    if (!a) {
        printf("Out of memory!");
        exit(1);
    }
    int acc_carry = 0;
    int prev_digits = 0;
    int base = 10000;
    bool is_first_iter = true;

    for (int i = len; i > 0; i -= 14) {
        for (int j = i-1; j > 0; j -= 1) {
            acc_carry *= j;
            acc_carry += (is_first_iter ? 2000 : a[j]) * base;
            int g = 2*j - 1;
            a[j] = acc_carry % g;
            acc_carry /= g;
        }
        printf("%04d", prev_digits + acc_carry/base);
        acc_carry = prev_digits = acc_carry % base;
        is_first_iter = false;
    }
    printf("\n");

    free(a);
}