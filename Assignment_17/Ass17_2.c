// Input :  Rows = 4, Columns = 4 
/*
    *       *       *       #
    *       *       #       @
    *       #       @       @
    #       @       @       @
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input");
        return;
    }
    
    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++) 
        {  
            if(i == j)
            {
                printf("#\t"); 
            }

            else if(i>j)
            {
                printf("*\t");
            }

            else
            {
                printf("@\t");
            }
        }

    printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number Of Rows : ");
    scanf("%d",& iValue1);

    printf("Enter Number Of Columns : ");
    scanf("%d",& iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}