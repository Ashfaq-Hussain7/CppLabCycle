#include<iostream>
class complex
{
    private:
        float real;
        float imag;
    public:
        void get_complex();
        void display_complex();
        friend complex operator +(const complex&,const complex&);
        friend complex operator *(const complex&,const complex&);
};
void complex::get_complex()
{
    std::cout<<"Enter the real part of the complex number"<<std::endl;
    std::cin>>real;
    std::cout<<"Enter the imaginary part of the complex number"<<std::endl;
    std::cin>>imag;
}
void complex::display_complex()
{
    if(imag<0)
    {
        std::cout<<real<<" "<<imag<<"i"<<std::endl;
    }
    else
    {
        std::cout<<real<<" + "<<imag<<"i"<<std::endl;
    }
}
complex operator+(const complex &X, const complex &Y)
{
    complex S;
    S.real=X.real+Y.real;
    S.imag=X.imag+Y.imag;
    return(S);
}
complex operator*(const complex &X, const complex &Y)
{
    complex P;
    P.real=(X.real*Y.real)-(X.imag*Y.imag);
    P.imag=(X.real*Y.imag)+(X.imag*Y.real);
    return(P);
}
int main()
{
    complex C1,C2,Sum,Product;
    int choice1,choice2;
    std::cout<<"Complex Number 1"<<std::endl;
    C1.get_complex();
    std::cout<<"Complex Number 2"<<std::endl;
    C2.get_complex();
    std::cout<<"The first complex number= "<<std::endl;
    C1.display_complex();
    std::cout<<"The second complex number= "<<std::endl;
    C2.display_complex();
    do
    {
        std::cout<<"***Pick The Required Operation***\n1.Complex Addition\n2.Complex Multipilication";
        std::cin>>choice1;
        switch(choice1)
        {
            case 1:
                Sum=C1+C2;
                std::cout<<"The sum of two complex numbers= ";
                Sum.display_complex();
                break;
            case 2:
                Product=C1*C2;
                std::cout<<"The product of two complex numbers= ";
                Product.display_complex();
                break;
            default:
                break;
        }
        std::cout<<"Do you want to continue ? \n1.Continue\n2.Exit"<<std::endl;
		std::cin>>choice2;
	}while (choice2 == 1);
	if(choice2!=1)
    {
		std::cout<<"***You Have Exited***"<<std::endl;
	}
	return (0);
}

