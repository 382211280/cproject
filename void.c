#include <stdio.h>
typedef int u32;
typedef char s8;
#include <arpa/inet.h>
u32 void_test(void *buf)
{
    u32 test=htons(*(u32 *)buf);
    
    printf("test:%d",test);
    return test;
}
int main(){
    u32 id=0;
    void_test(&id);
    return 0;
}
