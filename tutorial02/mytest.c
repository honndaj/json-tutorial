#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <error.h>

int main(){
    char *end;
    int n = strtod("3e1223",&end);
    printf("%d", errno);
    return 0;
}