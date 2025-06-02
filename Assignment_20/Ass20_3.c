#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iRes = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iRes = iCnt;
        }
        else
        {
            iRes = -1;
        }
    }

    return iRes;
}

int main()
{
    int iSize = 0, iValue = 0;
    int *Ptr = NULL;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter numbers of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the number : \n");
    scanf("%d", &iValue);

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

    iRet = LastOcc(Ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such member \n");
    }
    else
    {
        printf("First Occurence of number is : %d \n", iRet);
    }

    free(Ptr);

    return 0;
}