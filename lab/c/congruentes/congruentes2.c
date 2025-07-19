#include <stdio.h>

int main() {
  int n, m, j,   /* dados de entrada               */
      c,         /* numero congruente a j modulo m */
      i;         /* contador de números impressos  */
  
  printf("Digite os valores de n, j e m: ");
  scanf("%d %d %d", &n, &j, &m);
  
  printf ("Os %d primeiros naturais congruentes a %d modulo %d sao: ",n, j, m);
  
  /* inicializacoes */
  c = j;
  
  for (i = 0; i < n; i++) {
    printf("%d ", c);
    c = c + m;        /* passa para o proximo numero congruente a j modulo m */
  }
  printf("\n");
  
  return 0;
}
