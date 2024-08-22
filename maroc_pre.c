#include <stdio.h>

#define STR(x) #x
#define CONCAT(a,b) a##b


int main(void) {

    int xy = 100;
    printf("%s\n", STR(Hello world));// 输出：Hello World
    printf("%d\n", CONCAT(x,y));   // 输出：100


#ifdef ABC
    printf("ABC is defined\n");
#else
    printf("the %s, %s, %d\n",__FUNCTION__ , __FILE__ ,__LINE__  );
#endif
//输出the main, D:/Embedded_Projects/myProject/my_C/main_maroc.c, 17
    return 0;












    return 0;
}


