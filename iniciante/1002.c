#include <stdio.h>

int main ()
{

  // fórmula do área do círculo = pi * raio²
  double pi = 3.14159;
  double r;
  scanf("%lf", &r);
  double area = pi * (r * r);
  printf("A=%.4lf\n", area);
  return 0;
}
