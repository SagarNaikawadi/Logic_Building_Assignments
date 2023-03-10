#include<stdio.h>
#include<conio.h>

int main()
{
    int Roll_No;
    char Name[40] = {'\0'},Course[20] = {'\0'},City[20] = {'\0'};

    printf("\n Enter Student Roll Number => ");
    scanf("%d",&Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name => ");
    gets(Name);

    fflush(stdin);

    printf("\n Enter Student Course Name => ");
    gets(Course);

    fflush(stdin);

    printf("\n Enter Student City => ");
    gets(City);

    printf("\n Student Roll Number is = %d",Roll_No);
    printf("\n Student Name is        = %s",Name);
    printf("\n Student Course is      = %s",Course);
    printf("\n Student City is        = %s",City);

    getch();
    return 1;
}

