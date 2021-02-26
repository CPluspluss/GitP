#include<stdio.h>
#include"date.h"
#define PRT1(x) (x)*54.9282
#define PRT2(x) (x*54.9282)


// int main(int argc, char const *argv[])
// {
//     struct date today,tommorow;
//     printf("please inner you date: ");
//     scanf("%i %i %i",&today.day,&today.month,&today.year);
//     if(today.day != datetime(today)){
//         tommorow.day = today.day+1;
//         tommorow.month = today.month;
//         tommorow.year = today.year;

//     }else if(today.month == 12)
//     {
//         tommorow.month = 1;
//         tommorow.day = 1;
//         (tommorow.year)++;
//     }else{
//         tommorow.day = 1;
//         tommorow.mint main(int argc, char const *argv[])
// {
//     struct date today,tommorow;
//     printf("please inner you date: ");
//     scanf("%i %i %i",&today.day,&today.month,&today.year);
//     if(today.day != datetime(today)){
//         tommorow.day = today.day+1;
//         tommorow.month = today.month;
//         tommorow.year = today.year;

//     }else if(today.month == 12)
//     {
//         tommorow.month = 1;
//         tommorow.day = 1;
//         (tommorow.year)++;
//     }else{
//         tommorow.day = 1;
//         tommorow.month = today.month+1;
//         tommorow.year = today.year;
//     }

//     printf("The next day is %02i/%02i/%.2i\n"
//     ,tommorow.day,tommorow.month,tommorow.year);


//     return 0;
//     return 0;
// }


// <<<<<<< HEAD
// int main(int argc, char const *argv[]){
//     point y={0,0};   
//     getStruct(&y);
//     printStruct(y);
    
// =======
// >>>>>>> bc4c499a3e3a3db49ae609e3f1cb9680263b841e

// int main(int argc, char const *argv[]){
//     point y={0,0};  
//     getStruct(&y); //结构体传入内存地址（指针）
//     printStruct(y);
// }

// int main(int argc, char const *argv[])
// {
//     printf("%f\n",PRT1(5));
//     printf("%f\n",PRT2(5));
//     printf("%d",gAll);
// }

//联合体
// union date{
//     int i;
//     char a;
//     char k[sizeof(int)];
// }elt1,elt2;
// typedef int IN;
// int main(int argc, char const *argv[]){
//     IN sb = 1;
//     elt1.i = 2;
//     elt1.a = 'c';
//     elt2.i = 4;
//     printf("%d,%d\n",elt1.i,elt2.i); //输出后可以看到elt.i的值发生了改变
// }

//全局变量
int ggAll = 12;
int main(int argc, char const *argv[])
{
    static int a = 12;
    printf("%p\n%p",&ggAll,&a);

}


