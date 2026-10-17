#include <stdio.h>

int main () {
  int cod1, num1, cod2, num2;
  double valor_peca1, valor_peca2;
  scanf("%d %d %lf", &cod1, &num1, &valor_peca1);
  scanf("%d %d %lf", &cod2, &num2, &valor_peca2);

  double valor_total = (valor_peca1 * num1) + (valor_peca2 * num2);
  printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);
  return 0;
}
