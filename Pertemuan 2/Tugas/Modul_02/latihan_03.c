#include <stdio.h>
int main(void)
{
    double celsius;
    double fahrenheit;
    printf("Masukkan suhu Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (9 / 5) * celsius + 32.0;
    printf("%.2f derajat Celsius = %.2f derajat Fahrenheit\n",
           celsius, fahrenheit);
    
    return 0;

    
}
