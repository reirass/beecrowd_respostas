#include <stdio.h>

int main (){

  char nome[40];
  scanf("%s\n", nome);
  double salario, total_vendas;
  scanf("%lf %lf", &salario, &total_vendas);
  double total_recebido = salario + (total_vendas * 0.15);
  printf("TOTAL = R$ %.2lf\n", total_recebido);
  return 0;
}
