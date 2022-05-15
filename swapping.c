#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("before swapping a :");
	scanf("%d",&a);
	printf("before swapping b :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping\n");
	printf(" value of a is %d\n ",a);
	printf("value of b is %d",b);
}
