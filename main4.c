#include <stdio.h>

/*На вход подается произвольное четырехзначное число
Нужно напечатать среднее арифметическое цифр
*/
int main(void)
{
    int num;
    printf("Input a four-digit number: ");
    scanf("%d", &num);
    int sum = (num / 1000) + ((num / 100) % 10) + ((num / 10) % 10) + num % 10;
    float awg = sum / 4.f;
    printf("%.2f\n", awg);

    return 0;
}