/* Depure o seguinte código:

#include <stdio.h>
int main() {
    int x;
    printf("Digite um número: ");
    scanf("%d", x);
    printf("Número: %d\n", y);
    return 0;
}
*/


#include <stdio.h>
int main() {
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Número: %d\n", x);
    return 0;
}
