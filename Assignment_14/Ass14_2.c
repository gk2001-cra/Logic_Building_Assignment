// Input :  Rows = 4, Columns = 4
/*
    2       4       6       8
    1       3       5       7
    2       4       6       8
    1       3       5       7
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0; 
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= (iCol*2); j++) 
        {   
            if(i % 2 != 0)
            {
                if(j % 2 == 0)
                {
                    printf("%d\t", j);
                }
            } 
            else if(j % 2 != 0) 
            {
                printf("%d\t", j);
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