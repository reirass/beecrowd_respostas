#include <stdio.h>
#include <math.h>

int main () {
  double raio;
  scanf("%lf", &raio);
  double pi = 3.14159;
  double volume_esfera = (4.0/3) * pi * pow(raio, 3);
  printf("VOLUME = %.3lf\n", volume_esfera);
  return 0;
}
