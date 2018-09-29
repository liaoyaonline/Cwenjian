#include <stdio.h>
#include <time.h>
int main()
{
    time_t hot=0x7FFFFFFFFFFFFF;
    printf("%s",asctime(gmtime(&hot)));
    int a=sizeof(time_t);
    printf("time = %d \n",a);
    return 0;
}

