#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bResult = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bResult = true;   
        }
    }

    return bResult;
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    bool bRet = false;
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

    bRet = Check(Ptr, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }

    else
    {
        printf("11 is absent");
    }

    free(Ptr);

    return 0;
}