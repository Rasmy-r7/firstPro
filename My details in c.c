#include<stdio.h>
int main()
{
    char name[100];
    char email[200];
    int contact;
    char address[100];
    char ras[100]="37, new road sammanthurai-03";
    printf("%s",ras);



    printf("\nEnter your name : ");
    scanf("%s",name);

    printf("Enter your email : ");
    scanf("%s",email);

    printf("Enter your contact  : ");
    scanf("%d",&contact);

    printf("Enter your address : ");
    scanf("%s",address);

    printf("My name is %s.\n My contact Details are, \n\t Email : %s\n\tContact Number : %d\n\t Address :  %s\n\t",name,email,contact,address);





    return 0;
}
