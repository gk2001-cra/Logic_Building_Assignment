// Input :  Rows = 3, Columns = 5
/*
    3       3       3       3       3
    2       2       2       2       2
    1       1       1       1       1
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';
    
    for(i = 1; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++) 
        {   
            printf("%c\t",ch);    
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