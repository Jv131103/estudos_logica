#include <stdio.h>

// Struct que guarda minutos e segundos
typedef struct {
    int minutos;
    int segundos;
} Tempo;

// Protótipos
int converter_segundos_em_minutos(int segundos);
Tempo converter_segundos(int total_segundos);

int main() {
    int entrada;
    scanf("%d", &entrada);

    int result = converter_segundos_em_minutos(entrada);
    printf("%d\n", result);

    Tempo resultado = converter_segundos(entrada);
    printf("%d minuto(s) e %d segundo(s)\n", resultado.minutos, resultado.segundos);

    return 0;
}

int converter_segundos_em_minutos(int segundos) {
    return segundos / 60;  // não precisa de floor
}

Tempo converter_segundos(int total_segundos) {
    Tempo t;
    t.minutos = total_segundos / 60;
    t.segundos = total_segundos % 60;
    return t;
}
