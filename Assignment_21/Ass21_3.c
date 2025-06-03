#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;
    int iMin = Arr[0];
    int iRes = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    iRes = iMax - iMin;

    return iRes;
}

int main()
{
    int iSize = 0;
    int *Ptr = NULL;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter numbers of elements : \n");
    scanf("%d", &iSize);

    Ptr = (int *) malloc (iSize * sizeof(int));

    if(Ptr == NULL)
    {
        printf("Unable to allocate memory \n");
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element : ", iCnt + 1);
        scanf("%d", &Ptr[iCnt]);
    }

    iRet = Difference(Ptr, iSize);

    printf("Difference is : %d\n", iRet);

    free(Ptr);

    return 0;
}