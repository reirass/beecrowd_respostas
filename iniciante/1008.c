#include <stdio.h>
 
int main() {
    int number, hours;
    double value;
    scanf("%d %d\n", &number, &hours);
    scanf("%lf", &value);
    printf("NUMBER = %d\n", number);
    double salary = value * hours;
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}
