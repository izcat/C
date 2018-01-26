#include<stdio.h>
#include<math.h>

int main()
{
    int a, b;
    float flt = 50.0;
    double dbl = 2.0;
    a = 3; b = 10;
    
    printf("a:%d\n", a);
    printf("a+b:%d\n", a+b);
    printf("a-b:%d\n", a-b);
    printf("a*b:%d\n", a*b);
    printf("a/b:%d\n", a/b);
    printf("a%%b:%d\n", a%b);
    printf("abs(a):%d\n", abs(a));
    
    printf("a+flt:%f\n", a+flt);
    printf("a+dbl:%lf\n", a+dbl*2);
    
    printf("a^2:%lf\n", pow(a,2));
    printf("sin(a):%lf\n", sin(a));
    system("pause");
    return 0;
}

