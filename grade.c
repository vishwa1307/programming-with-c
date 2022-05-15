#include<stdio.h>
int main()

{
	float marks;
	printf("Enter marks of the child \n");
	scanf("%f",&marks);
	printf("%f\n",marks);
	if(marks>=85)
	{
		printf("The child secured Grade A");
	}
	else if(marks>=70 && marks<=84)
	{
		printf("The child has secured Grade B");
	}
	else if(marks>=55 && marks<=69)
	{
		printf("The child has secured Grade C");
	}
	else if(marks>=40 && marks<=54)
	{
		printf("The child has secured Grade D");
	}
	else
	{
		printf("The child has secured Grade F");
	}
}
