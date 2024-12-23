#include<stdio.h>

int main()

{
	int age;
	printf("enter your age : \n");
	scanf("%d",&age);
	printf("you have enterded %d as your age \n",age);
	if (age>=18)
	{
		printf("you can vote bro !!");
	}
		else if(age>=0)
		{
			printf("you are minor, you can't vote");
		}
	
	else {
		printf("you can't vote");
	}
}
