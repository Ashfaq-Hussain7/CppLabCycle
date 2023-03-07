#include<iostream>
class complex
{
    private:
        float real;
        float imag;
    public:
        complex();
        complex(float);
        complex(float,float);
        complex(complex,complex);
        void show(void);
};
complex::complex(float a )
{
    real=a;
    imag=a;
}
complex::complex(float x, float y)
{
    real=x;
    imag=y;
}
complex::complex(complex c1, complex c2)
{
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
}
void complex::show(void)
{
    std::cout<<real<<" + "<<imag<<"i";
}
int main()
{
    int real;
    int imag;
    std::cout<<"Enter the real part and imaginary part of first complex number: ";
    std::cin>>real>>imag;
    complex a(real,imag);
    std::cout<<"Enter the real part and imaginary part of second complex number: ";
    std::cin>>real>>imag;
    complex b(real,imag);
    complex c(a,b);
    std::cout<<"Sum of complex numbers= ";
    c.show();
    return(0);
}