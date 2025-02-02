#include <stdio.h>
int main()
{
    int number;
    int prime = 1;
    printf("enter number to check : ");
    scanf("%d", &number);
    if (number == 0 || number == 1)
    {
        prime = 0;
    }
    else
    {
        // with for loop :

        // for (int i = 2; i < number; i++)
        // {
        //     if (number % i == 0 && number != 2)
        //     {
        //         prime = 0;
        //         break;
        //     }
        // }
        
        // with while loop : 

        // int i=2;
        // while(i<number){
        //     if (number % i == 0 && number != 2)
        //     {
        //         prime = 0;
        //         break;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        
        // with do while loop
        
        int i=2;
        do{
            if (number % i == 0 && number != 2)
            {
                prime = 0;
                break;
            }
            else{
                i++;
            }
        }while(i<number);
    }
    if (prime)
    {
        printf("You Entered %d Which is a Prime Number", number);
    }
    else
    {
        printf("You Entered %d Which is Not a Prime Number", number);
    }

    return 0;
}