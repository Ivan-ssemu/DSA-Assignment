/*2. Write a C program that accepts a group of N domestic animals 
and a group of X wild animals. 
Your program should print N + X animals after entering each group*/

#include <stdio.h>

int main()
{
    int N, X,i,j;
    char Domestic[20], Wild[20];

    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);
    printf("Enter the number of wild animals: ");
    scanf("%d", &X);
    for(i = 0; i < N; i++)
    {
        printf("Enter the name of the domestic animal: ");
        scanf("%s", Domestic);
    }
    
    
    for(j = 0; j < X; j++)
    {
        printf("Enter the name of the wild animal: ");
        scanf("%s", Wild);
    }

    printf("The total number of animals is %d\n", N + X);
    return 0;
}