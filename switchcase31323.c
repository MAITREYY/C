#include<stdio.h>
int main()

{
	int age,marks;
	printf("enter your age\n");
	scanf("%d",&age);
	
	printf("enter your marks\n");
	scanf("%d",&marks);
	
	switch(age)
	{
		    case 3:
			printf("the age is 3\n");
			switch(marks)
			{
				case 45:
				printf("you got 45 marks");
				
				default:
			    printf("your marks are not 45");
					
			}
			    break;
			case 13:
			printf("the age is 13");
			break;
			
			case 23:
			printf("the age is 23");
			break;
			
			default:
				printf("age is't 3,13 or 23.");
				
	}
}
