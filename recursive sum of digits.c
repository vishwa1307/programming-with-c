#include <stdio.h>
int sumOfDigits(int num);
int main()
{
    int num, sum;
    printf("Enter any number : ");
    scanf("%d", &num);
    sum = sumOfDigits(num);
    printf("The sum of %d is = %d", num, sum);
    return 0;
}
int sumOfDigits(int num)
{
    if(num == 0)
        return 0;
    else
    return ((num % 10) + sumOfDigits(num / 10));
}
