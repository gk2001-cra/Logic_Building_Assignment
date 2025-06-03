#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(Ptr, iSize);

    printf("Smallest number is : %d\n", iRet);

    free(Ptr);

    return 0;
}