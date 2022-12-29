#include<stdio.h>
int main()
{
    int num[5];
    int i;
    for(i=0; i<5; ++i)
    {
        printf("Enter number: ");
        scanf("%d",&num[i]);
    }
    return 0;
}
