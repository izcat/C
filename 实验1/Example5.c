#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int a, b;
    printf("sizeof(unsigned int):%d\n", sizeof(unsigned int));
    a = pow(2,32)-1 ;     //unsigned int [0,2^32-1]
    b = a + 1;
    printf("a=%u, b=%u\n", a, b);
    printf("a=%d, b=%d\n", a, b);    

    system("pause");
    return 0;
}

