#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\nEnter 5 marks : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=m1+m2+m3+m4+m5/5.0;
    printf("\nTotal : %d",total);
    printf("\nAverage : %f",avg);
    return 0;
}
