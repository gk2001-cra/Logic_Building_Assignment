#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum1 = 0, iSum2 = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }

        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }

    iDiff = iSum1 - iSum2;

    return iDiff;
}

int main()
{
    int iSize = 0;
    int *Ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    Ptr = (int *)malloc(iSize * sizeof(int));
    
    if(Ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the Elements : %d\n", iCnt+1);
        scanf("%d",&Ptr[iCnt]);
    }

    iRet =  Difference(Ptr, iSize);

    printf("Result is : %d", iRet);

    free(Ptr);

    return 0;
}