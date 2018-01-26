#include <stdio.h>

typedef struct {
	double real;
	double imag;
}Complex;

Complex Add(Complex a, Complex b);	// a + b
Complex Sub(Complex a, Complex b);  // a - b
Complex Mul(Complex a, Complex b);  // a * b
Complex Div(Complex a, Complex b);  // a / b
void Print(Complex a);

int main()
{
	Complex c1 = {3, 2}, c2 = {2, 1};
	Print(Add(c1, c2));
	Print(Sub(c1, c2));
	Print(Mul(c1, c2));
	Print(Div(c1, c2));
	
  	system("pause");
	return 0;
}

void Print(Complex a)
{
    if(a.imag>0)
	    printf("%.2f+%.2fi\n", a.real, a.imag);
	else if(a.imag<0)
        printf("%.2f%.2fi\n", a.real, a.imag);
    else
    	printf("%.2f\n", a.real);	
}

Complex Add(Complex a, Complex b)
{
	return (Complex){a.real+b.real, a.imag+b.imag};
}

Complex Sub(Complex a, Complex b)
{
	return (Complex){a.real-b.real, a.imag-b.imag};
}

Complex Mul(Complex a, Complex b)
{
	
	return (Complex){a.real*b.real-a.imag*b.imag, a.real*b.imag-a.imag*b.real};
}

Complex Div(Complex a, Complex b)
{
	double x = b.real * b.real + b.imag * b.imag;
	Complex y = Mul(a, (Complex){b.real,-b.imag});
	return (Complex){y.real/x, y.imag/x};
}

