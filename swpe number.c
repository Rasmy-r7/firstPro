#include<stdio.h>

int main()
{
    int c,d,b;
    printf("\nEnter 2 Nos : ");
    scanf("%d%d", &c,&d);
    printf("\n C : %d  D : %d", c,d);
    b=c;
    c=d;
    d=b  ;
    printf("\n C : %d  D : %d\n", c,d);
    return 0;
}
