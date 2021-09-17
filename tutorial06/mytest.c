#include <stdlib.h>
 
void GetMemory(char *p, int num)
{
    p = (char*)malloc(sizeof(char) * num);//使用new也能够检测出来
}
 
int main(int argc,char** argv)
{
    char *str = NULL;
    GetMemory(str, 100);
    //如果main中存在while循环调用GetMemory
    //那么问题将变得很严重
    //while(1){GetMemory(...);}
    return 0;
}