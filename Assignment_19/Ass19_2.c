#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount1 = 0, iCount2 = 0;
    int iDiff = 0;

    printf("The Difference between odd and even numbers are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount1++;
        }
        else 
        {
            iCount2++;
        }
    }

    iDiff = iCount1 - iCount2;

    return iDiff;
}
int main()
{
    int iSize = 0;
    int iCnt = 0, iRet = 0;
    int *Ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    Ptr = (int *)malloc(iSize * sizeof(int));

    if(Ptr == NULL)
    {
        printf("Unable to alocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the elements %d : \n", iCnt+1);
        scanf("%d", &Ptr[iCnt]);
    }

    iRet = CountEven(Ptr, iSize);

    printf("%d\n", iRet);

    free(Ptr);

    return 0;
}