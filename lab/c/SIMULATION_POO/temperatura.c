#include <stdio.h>

struct Temperatura {
    // não precisa de membros, pois é “estática”
};

// "método estático"
float convert_celsius_to_fahrenheit(float celsius) {
    return (celsius * 1.8f) + 32;
}

int main() {
    printf("20°C = %.1f°F\n", convert_celsius_to_fahrenheit(20));
    return 0;
}
