#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }

    return iCount;
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

    printf("Count of Even numbers is : %d\n", iRet);

    free(Ptr);

    return 0;
}