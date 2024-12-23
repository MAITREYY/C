#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
int main ()
{
    int num, gen, count=1;
    
    srand(time(0));
    gen=rand()%100+1;
    
    do
    {
        printf("Guess the number = ");
        scanf("%d",&num);
        
        if(num<gen)
        {
            printf("Think big number...\n\n");
        }
        
        else if(num>gen)
        {
            printf("Think small number...\n\n");
        }
        
        else
        {
            printf("You guessed number in %d atteps.\n\n",count);
        }
        
        count++;
        
    }while(num!=gen);
}
