#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    int iSize = 0, iValue = 0;
    int iCnt = 0;
    int iRet = 0;
    int *Ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);
    
    printf("Enter number you want to search : \n");
    scanf("%d",&iValue);

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

    iRet = Frequency(Ptr, iSize, iValue);

    printf("%d",iRet);

    free(Ptr);

    return 0;
}