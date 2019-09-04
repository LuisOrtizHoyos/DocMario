#include <cs50.h>
#include <stdio.h>
 int height; 
char block[8] = "#";
int main(void)
{
 
  int max = 8;
  int min = 1;
  int i, space, pound;
    {
    do
    {
    printf("Enter Height: \n");
    scanf("%i", &height);
       
    }
    while ( height < min || height > max);
       
    }
   for ( i = height; i >= 1; i--)
   {
       for( space = 1; space <= i; space++)
       {
           printf(" ");
       }
       for( pound = height; pound >= i; pound--)
       {
           printf("#");
       }
       printf("\n");
   }
    
    printf("\n");
    return 0;
}

