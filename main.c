#include<stdio.h>
#include"date.h"

int main(int argc, char const *argv[])
{
    struct date today,tommorow;
    printf("please inner you date: ");
    scanf("%i %i %i",&today.day,&today.month,&today.year);
    if(today.day != datetime(today)){
        tommorow.day = today.day+1;
        tommorow.month = today.month;
        tommorow.year = today.year;

    }else if(today.month == 12)
    {
        tommorow.month = 1;
        tommorow.day = 1;
        (tommorow.year)++;
    }else{
        tommorow.day = today.month+1;
        tommorow.month = today.month;
        tommorow.year = today.year;
    }

    printf("The next day is %02i-%02i-%.2i",tommorow.day,tommorow.day,tommorow.year);


    return 0;

}