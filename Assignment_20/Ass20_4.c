#include<stdio.h>
#include<stdlib.h>

void FirstOcc(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iValue1 = 0, iValue2 = 0;
    int *Ptr = NULL;
    int iCnt = 0;

    printf("Enter numbers of elements : \n");
    scanf("%d", &iSize);

    printf("Start Point : \n");
    scanf("%d", &iValue1);

    printf("End Point : \n");
    scanf("%d", &iValue2);

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

    FirstOcc(Ptr, iSize, iValue1, iValue2);

    free(Ptr);

    return 0;
}