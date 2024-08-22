#include <stdio.h>

#define STR(x) #x
#define CONCAT(a,b) a##b

int main(void) {

    int xy = 100;
    printf("%s\n", STR(Hello world));// 输出：Hello World
    printf("%d\n", CONCAT(x,y));   // 输出：100
    return 0;
}


