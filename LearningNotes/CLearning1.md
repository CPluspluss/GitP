# First
## __1 : struct__
(1) How to creat a struct
```C
    struct date 
    {
        int x;
        int y;
    };
```
(2) How to usr struct
```C
    int main(int argc, char const *argv[]){
        struct date day; //(Normal creat)
        date day; //(typedef creat you can see in next block)

    }
```
(3) you can always use struct with **[pointer](https://baike.baidu.com/item/%E6%8C%87%E9%92%88/2878304?fr=aladdin)**  
* You can see an example which is in the file named **[main.c](../main.c)**  and **[date.h](../date.h)**

(4) typedef
```C
    typedef int Lengh; //means frome now you can use Lengh to define type int like Lengh i = int i;
    Lengh i == int i;
    //typedef can also use with struct
    typedef struct date{
        int x;
        int y;
    }dates;
    struct date day == dates day;

```