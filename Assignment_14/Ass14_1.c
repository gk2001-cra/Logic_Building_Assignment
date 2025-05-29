// Input :  Rows = 4, Columns = 4
/*
    1       2       3       4
    5       6       7       8
    9       1       2       3
    4       5       6       7
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNo = 1; 
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++, iNo++) 
        {   
            printf("%d\t",iNo);

            if(iNo >= 9)
            {
                iNo = 0;
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