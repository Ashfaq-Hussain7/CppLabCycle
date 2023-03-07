#include<iostream>
class complex
{
    private:
        float real;
        float imag;
    public:
        void input(float i, float r)
        {
            real=r;
            imag=i;
        }
        friend complex sum(complex, complex);
        void show(void); 
       
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;
}
void complex::show(void)
{
    if(imag>0)
    {
        std::cout<<real<<"+i"<<imag<<std::endl;

    }
    else
    {
        std::cout<<real<<"-"<<-imag<<std::endl;
    }
}
int main()
{
    float x;
    float y;
    std::cout<<"Enter the real part and imaginary part of the first complex number: ";
    std::cin>>x>>y;
    complex a;
    a.input(x,y);
    std::cout<<"Enter the real part and imaginary part of the  complex number: ";
    std::cin>>x>>y;
    complex b;
    b.input(x,y);
    complex c;
    c=sum(a,b);
    c.show();
    return (0);
}