#include <stdio.h>
#include <math.h>
#include <string.h>



const char* is_right_triangle(int a, int b, int c);
const char* ctonic_is_right_triangle(int a, int b, int c);

int main(){
    printf("%s\n", is_right_triangle(3, 4, 5));
    printf("%s\n", is_right_triangle(10, 10, 50));
    printf("\n");
    printf("%s\n", ctonic_is_right_triangle(3, 4, 5));
    printf("%s\n", ctonic_is_right_triangle(10, 10, 50));
    return 0;
}

const char* is_right_triangle(int a, int b, int c) {
    int maior, catetos;
    if (a > b && a > c) {
        maior = a;
        catetos = pow(b, 2) + pow(c, 2);
    } else if (b > a && b > c) {
        maior = b;
        catetos = pow(a, 2) + pow(c, 2);
    } else {
        maior = c;
        catetos = pow(a, 2) + pow(b, 2);
    }

    if (pow(maior, 2) == catetos) {
        return "True";
    } else {
        return "False";
    }
}

const char* ctonic_is_right_triangle(int a, int b, int c) {
    // Ordena os lados para garantir que hypotenusa será o maior
    int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (a > b) { temp = a; a = b; b = temp; }

    // Agora a <= b <= c → c é o maior lado
    return (pow(c, 2) == pow(a, 2) + pow(b, 2)) ? "True" : "False";
}
