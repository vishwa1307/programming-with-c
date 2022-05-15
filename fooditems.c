#include<stdio.h>
int main()
{
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("Food item - Pizza\nprice - Rs 239");
		break;
		
		case 2:
		printf("Food item - Burger\nprice - Rs 129");
		break;
		
		case 3:
		printf("Food item - Pasta\nprive - Rs 179");
		break;			
					
		case 4:
		printf("Food item - French fries\nprice - Rs 99");				
		break;
		
		case 5:
		printf("Food item - Sandwich\nprice - Rs 149");
	    break;
        
		default :
		printf("Invalid Choice"); 
    }
}
