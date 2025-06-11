#include<stdio.h>

void Reverse(char *str)
{
    char *Start = NULL;
    char *End = NULL;
    char Temp = '\0';

    Start = str;
    End = str;

    while(*End != '\0')
    {
        End++;
    }

    End--;

    while(Start < End)
    {
        Temp = *Start;
        *Start = *End;
        *End = Temp;       

        
        Start++;
        End--;
    }

}
int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("String after reversal is : %s\n",Arr);

    return 0;
}