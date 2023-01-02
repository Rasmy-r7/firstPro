#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,m,cm,ft,i;
    printf("\nEnter The Kilometer : ");
    scanf("%f", &km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
    printf("\n KM : %f",km);
    printf("\n M : %f", m);
    printf("\n CM : %f", cm);
    printf("\n IN : %f", i);
    printf("\n FT : %f", ft);
    return 0;
}
