#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0, iSum = 0;
    int iNo = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10; 
        }  

        printf("%d ", iSum);
    }
    
    
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

    Digit(Ptr, iSize);

    free(Ptr);

    return 0;
}