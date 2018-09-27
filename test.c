#include <stdio.h>

int main()
{
    const int fuck =0,shit =0;
    int const fuck1 =0,shit1 =0;
    fuck++;
    shit++;
    fuck1++;
    shit1++;
    printf("%d,%d,%d,%d\n",fuck,shit,fuck1,shit1);
    return 0;
}

