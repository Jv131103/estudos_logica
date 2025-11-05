// fat_gmp.c
#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>

void fat_plano_a_gmp(unsigned long n, mpz_t result) {
    mpz_set_ui(result, 1);
    for (unsigned long k = 2; k <= n; ++k) {
        mpz_mul_ui(result, result, k);
    }
}

int main(int argc, char** argv) {
    unsigned long n = 100; // mude aqui ou leia de argv
    if (argc > 1) n = strtoul(argv[1], NULL, 10);

    mpz_t res;
    mpz_init(res);
    fat_plano_a_gmp(n, res);
    gmp_printf("%Zd\n", res);
    mpz_clear(res);
    return 0;
}
