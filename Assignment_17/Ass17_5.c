// Input :  Rows = 4, Columns = 4 
/*
    1       2       3       4       5
    1       2                       5
    1               3               5
    1                       4       5
    1       2       3       4       5
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
    
    for(i = 1; i <= (iRow + 1); i++)
    {
        for(j = 1; j <= (iCol + 1); j++) 
        {  
            if((i == 1) || (i == (iRow + 1)) || (j == 1) || (j == (iCol+1)) || (i == j))
            {
                printf("%d\t",j); 
            }

            else
            {
                printf(" \t");
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