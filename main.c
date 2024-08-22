#include <stdio.h>

#define BYTE0(dwTemp)  ( *( (char *)(&dwTemp)  ) )
#define BYTE1(dwTemp)  ( *( (char *)(&dwTemp)+1) )
#define BYTE2(dwTemp)  ( *( (char *)(&dwTemp)+2) )
#define BYTE3(dwTemp)  ( *( (char *)(&dwTemp)+3) )


int main(void) {
    int value = 0x12345678;
    unsigned int data =0x12;
    printf("%d\n", data);

    BYTE3(value) = 0x99;
    printf("%x\n", BYTE0(value));
    printf("%x\n", BYTE1(value));
    printf("%x\n", BYTE2(value));
    printf("%x\n", BYTE3(value));
    printf("%x\n", value);
    printf("%d\n", value);
    printf("Hello, World!\n");
    return 0;
}


