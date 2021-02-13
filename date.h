#include<stdbool.h>
struct date{
    int month;
    int day;
    int year;
};
bool isLeap(struct date day);
int datetime(struct date day)
{
    int days;
    const int daysmonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(day.month ==2 && isLeap(day))
    {
        days = 29;
    }else{
        days= daysmonth[day.month-1];
    }
    return days;

}

bool isLeap(struct date day)
{
    bool leap = false;

    if((day.year%4 == 0 && day.year%100 != 0) || day.year%400 == 0)
    {
        leap = true;
    }
    return leap;
}