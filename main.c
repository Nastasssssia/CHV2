#include <stdio.h>

/*Ввести три числа, найти их сумму
Нужно напечатать сумму трех чисел
*/
int main(void)
{
    int num1, num2, num3;
    printf("Input 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int sum = num1 + num2 + num3;
    printf("%d + %d + %d = % d\n", num1, num2, num3, sum);

    return 0;
}
