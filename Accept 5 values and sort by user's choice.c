//Accept 5 values and sort by user's choice

#include<stdio.h>
int main()
{
    int a[5], i, j;
    char sort;
    printf("Enter 5 values: ");
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    printf("Choose the type of sorting-A for ascending and D for descending: ");
    scanf(" %c", &sort);
    if(sort=='A')
    {
        for(i=0; i<4; i++)
        {
            for(j=0; j<4-i; j++)
            {
                if(a[j]>a[j+1])
                {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                }
            }
        }
        printf("sorting of the values in ascending order: %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
    }
    if(sort=='D')
    {
        for(i=0; i<4; i++)
        {
            for(j=0; j<4-i; j++)
            {
                if(a[j]<a[j+1])
                {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                }
            }
        }
        printf("sorting of the values in descending order: %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
    }
    return 0;
}
