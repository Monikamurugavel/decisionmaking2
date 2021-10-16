#include<stdio.h>
main()
{
	printf("food item and price:\n1.pizza-239\n2.burger-129\n3.pasta-179\n4.frenchfries-99\n5.sandwich-149\n6");
	int choice=0;
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("food item-pizza\nprice-239");
			break;
		case 2:
			printf("food item-burger\nprice-129");
			break;
		case 3:
		    printf("food item-pasta\nprice-179");
		    break;
		case 4:
			printf("food item-french fries\nprice-99");
			break;
		case 5:
			printf("food item-sandwich\nprice-149");
			break;
		default:
			printf("invaild choice");
	}
}
