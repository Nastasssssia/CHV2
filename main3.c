#include <stdio.h>

/*Ввести два числа и найти их разность
Нужно напечатать разность двух чисел
*/
int main(void)
{
    int num1, num2;
    printf("Input 2 numbers: ");
    scanf("%d%d", &num1, &num2);
    int dif = num1 - num2;
    printf("%d\n", dif);

    return 0;
}