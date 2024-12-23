#include<stdio.h>
int main(){
    int maths, science;
    printf("Enter the subject which u have passed\n");
    scanf("%d,& maths");
scanf("%d,&science");

    if (maths ,science)
	{
        printf("You will get prize money of Rs 1Lakh for passing both subjects");
    }
    else if(maths)
	{
        printf("You will get prize money of Rs 25K  for passing only maths");
    }
    else if(science)
	{
        printf("you will get prize monry of Rs 20K for passing only science ");
    }
    else{
        printf("you will not get any prize money because u coult not pass any subject");
    }
    return 0;
}

