// Input :  Rows = 4, Columns = 5
/*
    4       4       4       4       4
    3       3       3       3       3
    2       2       2       2       2
    1       1       1       1       1
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    
    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++) 
        {   
            printf("%d\t",i);    
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