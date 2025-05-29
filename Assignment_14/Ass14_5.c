// Input :  Rows = 4, Columns = 4 
/*
    1       2       3       4
    2       3       4       5
    3       4       5       6
    4       5       6       7
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = i; j < (i + iCol); j++) 
        {  
            printf(" %d\t", j); 
           
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