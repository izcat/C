#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    
    scanf("%d", &i);
    scanf("%f", &f);
    scanf("%lf", &d);
    
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %lf\n", d);
    
    system("pause");
    return 0;
}

