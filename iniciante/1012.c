#include <stdio.h>
#include <math.h>

int main () {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  double pi = 3.14159;
  // area do triangulo retangulo tem A por base e C por altura
  double area_triangulo = (a * c) / 2;
  // area do circulo de raio C.
  double area_circ = pi * pow(c, 2);
  // area do trapezio que tem A e B por bases e C por altura
  double area_trap = ((a + b) * c) / 2;
  // area do quadrado que tem lado B
  double area_quadrado = pow(b, 2);
  // area do retangulo que lados A e B 
  double area_retangulo = a * b;

  printf("TRIANGULO: %.3lf\n", area_triangulo);
  printf("CIRCULO: %.3lf\n", area_circ);
  printf("TRAPEZIO: %.3lf\n", area_trap);
  printf("QUADRADO: %.3lf\n", area_quadrado);
  printf("RETANGULO: %.3lf\n", area_retangulo);
  return 0;
}
