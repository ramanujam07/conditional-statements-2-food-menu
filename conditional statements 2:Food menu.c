#include<stdio.h>
int main()
{
	int choice=0;
	printf("pick your food :");
	printf("\n1.Burger-Rs299 \n2.Pizza-Rs399 \n3.French Fries-Rs249 \n4.Sandwich-Rs199 \n5.Veg roll-Rs129\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		{
				printf("Food item-Burger \nPrice-299\n");
				break;}
			case 2:
		{
				printf("Food item-Pizza \nPrice-399\n");
				break;}
			case 3:
		{
				printf("Food item-French Fries \nPrice-249\n");
				break;}
			case 4:
			{
		        printf("Food item-Sandwich \nPrice-199\n");
				break;}
			case 5:
		{
				printf("Food item-Veg Roll \nPrice-129\n");
				break;}
		    default :printf("Invalid choice");
			
	}
	return 0;
	
}
