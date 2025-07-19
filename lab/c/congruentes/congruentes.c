#include <stdio.h>

int main() {
  int n, m, j,   /* dados de entrada     */
      i;         /* percorre os naturais */
  
  printf("Digite os valores de n, j e m: ");
  scanf("%d %d %d", &n, &j, &m);
  
  printf ("Os %d primeiros naturais congruentes a %d modulo %d sao: ",n, j, m);
  for (i = 0; n != 0; i++){ 
    if (i % m == j % m) {
      printf("%d ", i);
      n = n - 1;
    }
  }
  printf("\n");
  
  return 0;
}
