#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char src[] = "hello";
    char* dst = (char*)malloc(6);
    memcpy(dst, src, 6);
    printf("%s\n", dst);
    printf("%s\n", src);
    return 0;
}